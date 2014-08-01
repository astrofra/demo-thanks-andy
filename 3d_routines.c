/*  
    Unusual Suspects 
    3D routines. 
*/

#include "3d_routines.h"
#include "Assets/cosine_table.h"
#include "common.h"

extern struct BitMap theBitMap;
extern struct BitMap theBitMap_3bpl;
extern struct BitMap theBitMap_2bpl;
extern struct BitMap theBitMap_1bpl;
extern struct RastPort theRP;
extern struct RastPort theRP_3bpl;
extern struct RastPort theRP_2bpl;
extern struct RastPort theRP_1bpl;

extern struct GfxBase *GfxBase;

extern int  drawn_min_x, drawn_min_y,
            drawn_max_x, drawn_max_y;

struct  obj_3d o;
int     *verts_tr = NULL;

/********* 3D Code *********/

void DrawAALine(int x1, int y1, int x2, int y2)
{
  int xo = 0, yo = 0;
  if (2 * abs(x1 - x2) > abs(y1 - y2))
  {
    xo = 1;
    yo = 0;
  }

  if (abs(x1 - x2) < 2 * abs(y1 - y2))
  {
    xo = 0;
    yo = 1;
  }

  if (xo || yo)
  {
    SetAPen(&theRP_2bpl, 1);
    Move(&theRP_2bpl, x1 + xo, y1 + yo);
    Draw(&theRP_2bpl, x2 + xo, y2 + yo);
    Move(&theRP_2bpl, x1 - xo, y1 - yo);
    Draw(&theRP_2bpl, x2 - xo, y2 - yo);
  }
}

void Prepare3DVertexList(void)
{  verts_tr = (int *)malloc(sizeof(int) * MAX_VERTICE_COUNT * 3); }

void Delete3DVertexList(void)
{  
  if (verts_tr != NULL)
  {
    free(verts_tr);
    verts_tr = NULL;
  }
}

int Draw3DMesh(int rx, int ry, int y_offset, int m_scale_x)
{

  int i,tx,ty,
  x1,x2,x3,x4, 
  y1,y2,y3,y4,
  hidden = 0;

  int XC,YC;

  int cs, ss, cc, sc;

  XC = 160;
  YC = 128;

  /*  Transform & project the vertices */
  //  pre-rotations
  cs = (tcos[rx] * tsin[ry]) >> fixed_pt_shift;
  ss = (tsin[ry] * tsin[rx]) >> fixed_pt_shift;
  cc = (tcos[rx] * tcos[ry]) >> fixed_pt_shift;
  sc = (tsin[rx] * tcos[ry]) >> fixed_pt_shift;

  for (i = 0; i < o.nverts; ++i)
  {
    /* 
        Rotation on 3 axis of each vertex
    */
    verts_tr[vX(i)] = (o.verts[vX(i)] * tsin[rx] + o.verts[vY(i)] * tcos[rx]) >> fixed_pt_shift; // / fixed_pt_pre;
    verts_tr[vY(i)] = (o.verts[vX(i)] * cs - o.verts[vY(i)] * ss + o.verts[vZ(i)] * tcos[ry]) >> fixed_pt_shift; // / fixed_pt_pre;
    verts_tr[vZ(i)] = (o.verts[vX(i)] * cc - o.verts[vY(i)] * sc - o.verts[vZ(i)] * tsin[ry]) >> fixed_pt_shift; // / fixed_pt_pre;

    /*
      Classic 3D -> 2D projection
    */
    tx = (verts_tr[vX(i)] * o.zoom) / (verts_tr[vZ(i)] + o.distance);
    ty = (verts_tr[vY(i)] * o.zoom) / (verts_tr[vZ(i)] + o.distance);
    verts_tr[vX(i)] = tx;
    verts_tr[vY(i)] = ty;
  }

  /*
    Draw each face (we assume it's a quad)
  */
  for (i = 0; i < o.nfaces; ++i)
  {
    x1 = verts_tr[vX(o.faces[Fc0(i)])];
    y1 = YC + verts_tr[vY(o.faces[Fc0(i)])];

    x2 = verts_tr[vX(o.faces[Fc1(i)])];
    y2 = YC + verts_tr[vY(o.faces[Fc1(i)])];

    x3 = verts_tr[vX(o.faces[Fc2(i)])];
    y3 = YC + verts_tr[vY(o.faces[Fc2(i)])];

    x4 = verts_tr[vX(o.faces[Fc3(i)])];
    y4 = YC + verts_tr[vY(o.faces[Fc3(i)])];

    if (m_scale_x > 0)
    {
      x1 = x1 >> m_scale_x;
      x2 = x1 >> m_scale_x;
      x3 = x1 >> m_scale_x;
      x4 = x1 >> m_scale_x;
    }

    x1 += XC;
    x2 += XC;
    x3 += XC;
    x4 += XC;

    //  should we draw the face ?
    if (o.flag_cull_backfaces)
      hidden = (x3 - x1) * (y2 - y1) - (x2 - x1) * (y3 - y1);

    if (!o.flag_cull_backfaces || (o.flag_cull_backfaces && hidden < 0))
    {           
      SetAPen(&theRP_2bpl, 1);

      Move(&theRP_2bpl, x1, y1 + y_offset);
      Draw(&theRP_2bpl, x2, y2 + y_offset);
      Draw(&theRP_2bpl, x3, y3 + y_offset);
      Draw(&theRP_2bpl, x4, y4 + y_offset);
      Draw(&theRP_2bpl, x1, y1 + y_offset);
    }
  } 

  for (i = 0; i < o.nfaces; ++i)
  {
    x1 = verts_tr[vX(o.faces[Fc0(i)])];
    y1 = YC + verts_tr[vY(o.faces[Fc0(i)])];

    x2 = verts_tr[vX(o.faces[Fc1(i)])];
    y2 = YC + verts_tr[vY(o.faces[Fc1(i)])];

    x3 = verts_tr[vX(o.faces[Fc2(i)])];
    y3 = YC + verts_tr[vY(o.faces[Fc2(i)])];

    x4 = verts_tr[vX(o.faces[Fc3(i)])];
    y4 = YC + verts_tr[vY(o.faces[Fc3(i)])];

    if (m_scale_x > 0)
    {
      x1 = x1 >> m_scale_x;
      x2 = x1 >> m_scale_x;
      x3 = x1 >> m_scale_x;
      x4 = x1 >> m_scale_x;
    }

    x1 += XC;
    x2 += XC;
    x3 += XC;
    x4 += XC;

    //  should we draw the face ?
    hidden = (x3 - x1) * (y2 - y1) - (x2 - x1) * (y3 - y1);

    if (hidden > 0)
    {           
      SetAPen(&theRP_2bpl, 3);

      Move(&theRP_2bpl, x1, y1 + y_offset);
      Draw(&theRP_2bpl, x2, y2 + y_offset);
      Draw(&theRP_2bpl, x3, y3 + y_offset);
      Draw(&theRP_2bpl, x4, y4 + y_offset);
      Draw(&theRP_2bpl, x1, y1 + y_offset);

      drawn_min_x = QMIN(drawn_min_x, x1);
      drawn_min_y = QMIN(drawn_min_y, y1);
      drawn_max_x = QMAX(drawn_max_x, x1);
      drawn_max_y = QMAX(drawn_max_y, y1);

      drawn_min_x = QMIN(drawn_min_x, x2);
      drawn_min_y = QMIN(drawn_min_y, y2);
      drawn_max_x = QMAX(drawn_max_x, x2);
      drawn_max_y = QMAX(drawn_max_y, y2);      

      drawn_min_x = QMIN(drawn_min_x, x4);
      drawn_min_y = QMIN(drawn_min_y, y4);
      drawn_max_x = QMAX(drawn_max_x, x4);
      drawn_max_y = QMAX(drawn_max_y, y4);      

      drawn_min_x &= 0xFFF0;
      drawn_max_x &= 0xFFF0;
    }
  }

  return 0;
}