/*
	Audio synch data
	4 channels encoded on 2 bits each : CH0 || CH1 << 2 || CH2 << 4 || CH3 << 6
	Frequency : 50.0Hz
	Samples   : 7941
	Duration  : 2min 38sec
*/

#include <exec/types.h>

UBYTE const audio_sync[7941] =
{
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 16, 0, 
	0, 16, 0, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 32, 0, 16, 16, 0, 32, 16, 16, 16, 16, 16, 
	32, 16, 32, 16, 32, 16, 16, 32, 16, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 0, 16, 0, 
	16, 0, 32, 32, 16, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 
	32, 48, 32, 48, 32, 32, 48, 32, 48, 32, 48, 48, 48, 48, 32, 32, 32, 48, 0, 32, 32, 16, 32, 0, 32, 
	16, 16, 16, 16, 32, 32, 0, 32, 16, 16, 16, 16, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 48, 32, 48, 48, 48, 48, 32, 32, 48, 
	16, 16, 16, 0, 0, 32, 16, 32, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 32, 32, 32, 48, 32, 48, 32, 48, 48, 32, 48, 32, 48, 48, 48, 32, 48, 32, 32, 32, 0, 32, 16, 32, 
	16, 16, 32, 16, 16, 32, 16, 32, 16, 16, 32, 0, 32, 16, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 48, 32, 48, 48, 48, 48, 
	32, 48, 32, 16, 16, 16, 0, 16, 32, 16, 16, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 32, 48, 32, 48, 32, 32, 48, 32, 48, 32, 48, 48, 32, 48, 32, 48, 32, 32, 32, 48, 16, 16, 
	32, 16, 32, 16, 16, 32, 16, 16, 32, 16, 32, 16, 16, 16, 16, 32, 16, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 48, 48, 48, 48, 
	48, 48, 48, 32, 48, 16, 16, 0, 16, 0, 32, 32, 16, 32, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 32, 48, 32, 48, 32, 48, 32, 32, 48, 32, 48, 32, 48, 48, 32, 48, 32, 32, 32, 
	48, 0, 32, 32, 16, 32, 0, 32, 16, 0, 16, 16, 16, 32, 16, 32, 16, 16, 32, 16, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 48, 
	32, 48, 48, 48, 48, 32, 32, 48, 0, 16, 16, 16, 0, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 32, 48, 32, 48, 32, 48, 48, 32, 48, 32, 48, 48, 48, 32, 
	32, 32, 32, 32, 0, 32, 16, 32, 32, 16, 32, 16, 16, 32, 16, 32, 16, 16, 32, 0, 32, 16, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 32, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	32, 48, 48, 32, 48, 48, 48, 48, 16, 48, 32, 16, 16, 16, 0, 16, 32, 16, 32, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 32, 32, 48, 32, 48, 32, 48, 48, 32, 48, 
	48, 48, 32, 32, 32, 48, 16, 0, 32, 16, 32, 16, 16, 32, 16, 16, 32, 16, 32, 16, 16, 32, 16, 32, 16, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 32, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 32, 48, 48, 48, 48, 32, 48, 16, 16, 0, 16, 0, 32, 48, 16, 32, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 32, 48, 32, 32, 32, 32, 48, 32, 48, 
	48, 48, 48, 32, 48, 32, 32, 32, 48, 16, 32, 32, 16, 32, 16, 16, 32, 16, 16, 16, 16, 32, 16, 32, 16, 
	16, 32, 16, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 32, 48, 48, 32, 48, 48, 48, 48, 48, 32, 48, 0, 16, 16, 16, 0, 32, 32, 16, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 32, 48, 32, 48, 32, 48, 
	48, 32, 48, 32, 48, 48, 48, 48, 32, 32, 32, 48, 0, 32, 16, 32, 32, 0, 32, 16, 16, 16, 16, 32, 16, 
	16, 32, 16, 32, 16, 32, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 32, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 48, 32, 48, 48, 48, 48, 16, 32, 32, 16, 16, 16, 0, 16, 16, 
	16, 32, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 32, 
	48, 32, 48, 32, 32, 48, 32, 48, 48, 48, 32, 32, 32, 32, 16, 0, 32, 16, 32, 16, 16, 32, 16, 16, 32, 
	16, 32, 16, 16, 32, 16, 32, 16, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 32, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 48, 32, 48, 48, 48, 48, 32, 48, 16, 16, 16, 16, 
	0, 16, 32, 16, 16, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 32, 
	48, 32, 32, 48, 32, 48, 32, 48, 48, 48, 48, 32, 48, 32, 32, 32, 48, 16, 32, 32, 16, 32, 16, 16, 32, 
	16, 16, 32, 16, 32, 16, 32, 16, 16, 32, 16, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 0, 
	16, 0, 16, 0, 32, 32, 16, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	32, 48, 32, 48, 32, 48, 32, 32, 48, 32, 48, 32, 48, 48, 48, 48, 32, 32, 32, 48, 0, 32, 32, 16, 32, 
	0, 32, 16, 16, 16, 16, 32, 32, 0, 32, 16, 32, 16, 16, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 32, 48, 48, 32, 48, 48, 48, 48, 32, 
	32, 48, 16, 16, 16, 0, 16, 16, 16, 32, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	48, 48, 48, 48, 32, 32, 48, 32, 48, 32, 48, 48, 32, 48, 32, 48, 48, 48, 32, 48, 32, 32, 32, 0, 32, 
	16, 16, 16, 16, 32, 16, 19, 35, 19, 34, 16, 16, 32, 0, 32, 16, 48, 51, 50, 48, 48, 48, 48, 48, 51, 
	50, 48, 48, 51, 50, 51, 50, 48, 48, 48, 51, 50, 48, 49, 51, 34, 48, 48, 48, 48, 48, 48, 48, 48, 48, 
	51, 51, 51, 51, 51, 51, 48, 48, 48, 48, 48, 51, 51, 50, 48, 48, 48, 48, 51, 51, 34, 48, 51, 51, 51, 
	51, 51, 51, 48, 51, 51, 51, 49, 51, 51, 50, 48, 48, 48, 48, 51, 51, 51, 51, 35, 49, 51, 35, 50, 50, 
	50, 48, 32, 48, 32, 18, 19, 19, 3, 19, 32, 16, 16, 48, 48, 50, 51, 49, 51, 51, 50, 50, 50, 50, 51, 
	51, 50, 51, 51, 51, 35, 51, 35, 48, 34, 35, 51, 35, 50, 34, 51, 51, 33, 51, 32, 48, 32, 32, 33, 51, 
	18, 19, 35, 19, 35, 17, 16, 32, 16, 17, 34, 18, 35, 19, 17, 19, 18, 35, 18, 51, 50, 51, 51, 51, 51, 
	51, 51, 50, 51, 50, 50, 50, 51, 50, 51, 50, 50, 50, 49, 48, 48, 48, 49, 50, 50, 50, 51, 51, 51, 49, 
	50, 50, 50, 49, 51, 50, 51, 51, 50, 50, 50, 50, 51, 51, 50, 50, 50, 50, 51, 51, 51, 48, 48, 48, 48, 
	33, 51, 51, 51, 51, 51, 51, 48, 48, 48, 48, 50, 51, 51, 51, 51, 50, 48, 50, 51, 51, 35, 50, 51, 51, 
	51, 51, 51, 51, 50, 34, 50, 19, 19, 3, 19, 3, 35, 33, 16, 50, 51, 50, 51, 49, 51, 50, 49, 51, 51, 
	50, 48, 48, 48, 48, 50, 50, 51, 35, 51, 35, 48, 32, 48, 32, 32, 49, 35, 51, 33, 51, 51, 50, 51, 34, 
	35, 35, 49, 1, 34, 34, 18, 35, 2, 34, 19, 18, 19, 17, 19, 35, 3, 34, 19, 19, 16, 16, 48, 48, 50, 
	51, 51, 51, 48, 48, 48, 48, 48, 48, 48, 50, 50, 51, 51, 50, 51, 51, 50, 51, 51, 51, 51, 51, 51, 51, 
	51, 51, 48, 51, 51, 51, 51, 51, 51, 51, 51, 48, 48, 48, 48, 48, 48, 48, 51, 51, 48, 48, 48, 48, 48, 
	51, 51, 48, 48, 51, 51, 51, 51, 48, 48, 48, 51, 51, 48, 48, 51, 51, 48, 48, 48, 48, 48, 48, 48, 32, 
	48, 51, 35, 51, 51, 51, 51, 32, 32, 48, 0, 16, 19, 19, 3, 32, 32, 32, 48, 51, 51, 51, 48, 51, 51, 
	51, 51, 51, 51, 48, 51, 51, 51, 48, 51, 51, 35, 32, 32, 48, 32, 51, 35, 50, 51, 33, 50, 35, 51, 49, 
	51, 35, 32, 32, 32, 32, 2, 35, 19, 35, 35, 17, 32, 16, 16, 32, 17, 34, 17, 19, 35, 1, 35, 19, 50, 
	51, 50, 51, 51, 51, 51, 51, 51, 51, 49, 50, 51, 51, 51, 49, 51, 51, 50, 49, 51, 49, 48, 48, 48, 48, 
	50, 51, 50, 51, 51, 50, 50, 48, 48, 48, 49, 49, 51, 51, 50, 49, 51, 50, 50, 51, 50, 50, 51, 51, 50, 
	50, 51, 50, 34, 51, 51, 50, 50, 51, 51, 50, 50, 50, 49, 49, 48, 48, 48, 48, 51, 51, 50, 51, 51, 51, 
	48, 51, 35, 51, 50, 35, 51, 50, 50, 50, 17, 50, 35, 19, 18, 18, 3, 19, 35, 19, 19, 51, 48, 48, 48, 
	48, 49, 51, 51, 51, 51, 51, 51, 48, 48, 48, 48, 49, 50, 50, 35, 35, 35, 32, 49, 34, 50, 35, 50, 51, 
	35, 51, 51, 51, 35, 34, 34, 50, 19, 18, 34, 18, 35, 19, 18, 32, 17, 19, 34, 19, 34, 19, 17, 34, 19, 
	35, 17, 49, 48, 48, 48, 49, 51, 50, 51, 50, 51, 48, 48, 48, 48, 48, 50, 51, 49, 50, 51, 51, 49, 50, 
	51, 50, 51, 49, 50, 50, 51, 51, 51, 51, 49, 51, 51, 50, 49, 51, 51, 50, 51, 51, 51, 48, 48, 48, 48, 
	50, 51, 51, 51, 48, 48, 48, 48, 32, 48, 48, 48, 51, 51, 50, 51, 51, 51, 51, 50, 51, 51, 50, 50, 50, 
	51, 50, 51, 48, 34, 51, 51, 51, 227, 243, 243, 243, 240, 224, 240, 80, 16, 0, 16, 3, 35, 48, 16, 32, 48, 
	48, 51, 51, 48, 48, 243, 243, 243, 243, 240, 240, 240, 115, 51, 48, 48, 35, 51, 32, 48, 32, 48, 32, 32, 48, 
	32, 48, 243, 243, 243, 227, 242, 227, 224, 32, 48, 16, 32, 35, 19, 35, 0, 32, 16, 0, 19, 19, 19, 32, 211, 
	227, 211, 211, 227, 211, 240, 50, 51, 51, 48, 51, 51, 51, 48, 48, 48, 48, 50, 51, 51, 51, 241, 243, 243, 242, 
	242, 243, 243, 48, 48, 48, 48, 50, 51, 51, 51, 51, 50, 48, 48, 48, 48, 48, 241, 242, 243, 242, 242, 243, 243, 
	50, 51, 51, 51, 50, 50, 51, 50, 50, 51, 49, 50, 50, 51, 51, 242, 243, 242, 241, 242, 243, 241, 48, 48, 48, 
	48, 51, 50, 51, 50, 51, 50, 35, 48, 48, 32, 112, 242, 243, 243, 241, 226, 243, 194, 19, 18, 19, 66, 226, 226, 
	226, 241, 242, 242, 242, 243, 243, 51, 114, 242, 243, 241, 242, 242, 242, 243, 48, 48, 48, 32, 99, 34, 50, 18, 51, 
	35, 32, 51, 18, 50, 226, 226, 227, 225, 226, 226, 226, 211, 35, 2, 18, 18, 83, 18, 2, 19, 19, 19, 16, 0, 
	16, 16, 192, 227, 194, 210, 210, 226, 242, 241, 48, 48, 48, 48, 115, 51, 51, 51, 51, 48, 48, 51, 51, 51, 243, 
	243, 242, 226, 226, 227, 226, 226, 51, 50, 51, 50, 115, 50, 51, 51, 51, 48, 48, 50, 51, 50, 63, 63, 61, 63, 
	63, 62, 62, 62, 60, 60, 32, 44, 30, 31, 19, 3, 35, 16, 28, 28, 16, 0, 30, 31, 29, 35, 3, 34, 2, 
	14, 26, 19, 19, 30, 31, 31, 15, 15, 11, 3, 12, 14, 11, 3, 14, 31, 11, 5, 3, 3, 2, 13, 12, 12, 
	12, 13, 15, 11, 3, 1, 0, 0, 12, 8, 0, 0, 12, 15, 11, 1, 3, 3, 2, 15, 11, 3, 3, 13, 14, 
	10, 3, 2, 3, 1, 13, 15, 11, 3, 241, 243, 243, 243, 243, 243, 243, 240, 48, 52, 32, 18, 83, 23, 35, 18, 
	18, 18, 146, 83, 19, 3, 193, 195, 199, 195, 195, 195, 195, 211, 19, 19, 3, 2, 3, 3, 3, 2, 2, 2, 3, 
	3, 7, 3, 211, 211, 211, 195, 195, 195, 195, 192, 0, 0, 0, 7, 3, 3, 3, 2, 2, 2, 19, 19, 19, 3, 
	194, 195, 195, 195, 195, 195, 195, 135, 3, 3, 3, 19, 19, 19, 3, 2, 2, 2, 3, 3, 3, 3, 198, 194, 195, 
	195, 195, 195, 195, 209, 16, 16, 0, 3, 3, 3, 3, 3, 2, 2, 132, 0, 0, 0, 209, 210, 211, 195, 195, 195, 
	195, 67, 3, 3, 3, 7, 3, 3, 3, 3, 3, 3, 19, 19, 19, 3, 194, 194, 195, 195, 195, 195, 195, 132, 0, 
	0, 0, 19, 19, 19, 3, 3, 1, 2, 0, 0, 0, 0, 198, 194, 195, 195, 195, 195, 195, 19, 19, 19, 3, 195, 
	195, 195, 195, 195, 195, 195, 7, 3, 3, 3, 211, 211, 211, 195, 195, 195, 195, 0, 0, 0, 0, 7, 3, 3, 2, 
	2, 2, 1, 147, 19, 19, 2, 195, 195, 195, 195, 195, 195, 195, 7, 3, 3, 3, 19, 19, 19, 2, 2, 2, 1, 
	3, 3, 3, 3, 199, 195, 195, 195, 195, 195, 194, 80, 16, 16, 0, 3, 3, 3, 2, 2, 2, 1, 7, 3, 3, 
	66, 211, 211, 211, 195, 195, 195, 194, 3, 3, 3, 2, 7, 7, 3, 2, 2, 2, 1, 83, 19, 3, 67, 195, 195, 
	195, 195, 195, 195, 195, 68, 4, 0, 0, 83, 19, 3, 3, 2, 2, 2, 64, 0, 0, 128, 199, 199, 195, 195, 195, 
	195, 195, 19, 19, 3, 3, 67, 3, 3, 3, 3, 3, 2, 7, 7, 3, 195, 211, 211, 195, 195, 195, 195, 195, 0, 
	0, 0, 0, 71, 7, 3, 3, 2, 2, 1, 16, 16, 0, 192, 195, 195, 195, 195, 195, 195, 195, 3, 7, 3, 3, 
	83, 19, 3, 3, 3, 3, 193, 195, 195, 195, 195, 211, 211, 195, 195, 195, 195, 193, 0, 4, 0, 2, 83, 19, 3, 
	2, 2, 2, 66, 67, 3, 3, 193, 195, 199, 195, 195, 195, 195, 195, 19, 19, 3, 2, 67, 3, 3, 2, 2, 2, 
	2, 3, 7, 3, 195, 211, 211, 195, 195, 195, 195, 192, 0, 0, 0, 2, 67, 7, 3, 2, 2, 2, 2, 19, 19, 
	3, 193, 195, 195, 195, 195, 195, 195, 195, 3, 7, 3, 2, 83, 19, 3, 2, 2, 2, 2, 3, 3, 3, 195, 195, 
	199, 195, 195, 195, 195, 195, 16, 16, 0, 3, 67, 3, 3, 3, 2, 2, 128, 64, 4, 0, 208, 211, 211, 195, 195, 
	195, 195, 195, 3, 3, 3, 3, 3, 7, 3, 3, 3, 3, 19, 19, 19, 3, 194, 195, 195, 195, 195, 195, 195, 198, 
	0, 4, 0, 19, 19, 19, 3, 3, 2, 2, 0, 0, 0, 0, 197, 195, 195, 195, 195, 195, 195, 147, 19, 19, 3, 
	195, 195, 195, 195, 195, 195, 195, 135, 3, 3, 3, 211, 211, 211, 195, 195, 195, 195, 128, 0, 0, 0, 7, 3, 3, 
	3, 2, 2, 2, 147, 19, 19, 3, 195, 195, 195, 195, 195, 195, 195, 71, 3, 3, 3, 19, 19, 19, 3, 2, 2, 
	2, 3, 3, 3, 3, 199, 195, 195, 195, 195, 195, 195, 144, 16, 16, 0, 3, 3, 3, 3, 2, 2, 2, 7, 3, 
	3, 2, 211, 211, 211, 195, 195, 195, 195, 3, 3, 3, 3, 7, 3, 3, 2, 2, 2, 2, 147, 19, 19, 3, 15, 
	14, 3, 3, 3, 3, 3, 156, 28, 16, 0, 31, 31, 19, 3, 3, 2, 2, 128, 0, 0, 0, 15, 15, 3, 3, 
	3, 3, 7, 15, 15, 7, 7, 15, 15, 3, 3, 3, 3, 3, 3, 3, 3, 7, 15, 15, 7, 3, 3, 3, 11, 
	12, 12, 0, 8, 15, 15, 11, 3, 2, 2, 14, 12, 12, 4, 12, 15, 15, 11, 3, 3, 3, 15, 15, 15, 15, 
	15, 15, 15, 15, 11, 3, 3, 14, 15, 15, 7, 83, 255, 255, 255, 255, 255, 255, 254, 60, 60, 60, 44, 83, 19, 
	19, 34, 18, 18, 21, 79, 31, 15, 141, 211, 211, 195, 195, 195, 195, 198, 31, 31, 15, 14, 67, 3, 3, 2, 2, 
	2, 1, 31, 31, 15, 199, 223, 223, 207, 207, 195, 195, 193, 0, 0, 0, 9, 95, 31, 15, 14, 10, 2, 1, 19, 
	19, 3, 197, 207, 207, 207, 207, 207, 203, 194, 19, 19, 3, 2, 83, 19, 3, 2, 2, 2, 5, 15, 15, 15, 195, 
	223, 223, 207, 207, 207, 207, 203, 16, 16, 0, 5, 79, 15, 15, 15, 14, 14, 77, 92, 28, 12, 192, 211, 211, 195, 
	195, 195, 195, 207, 15, 15, 15, 15, 83, 19, 3, 3, 3, 3, 2, 19, 19, 3, 207, 207, 207, 207, 195, 195, 195, 
	195, 24, 24, 8, 14, 95, 31, 15, 3, 2, 2, 13, 12, 12, 12, 200, 211, 211, 195, 195, 195, 195, 207, 31, 31, 
	15, 207, 207, 207, 203, 195, 195, 195, 194, 19, 19, 3, 223, 223, 223, 207, 195, 195, 195, 192, 0, 0, 0, 14, 95, 
	31, 15, 14, 2, 2, 158, 95, 31, 15, 197, 195, 195, 195, 195, 195, 195, 223, 31, 31, 7, 30, 31, 31, 15, 14, 
	14, 2, 3, 3, 3, 3, 223, 223, 223, 207, 207, 195, 195, 220, 28, 28, 4, 3, 3, 3, 3, 2, 2, 2, 31, 
	31, 31, 15, 222, 223, 223, 207, 207, 207, 207, 135, 3, 3, 3, 19, 19, 19, 3, 2, 2, 2, 159, 95, 31, 15, 
	206, 206, 207, 195, 195, 195, 195, 221, 28, 28, 12, 19, 19, 19, 3, 3, 2, 2, 140, 12, 12, 12, 209, 210, 211, 
	195, 195, 195, 195, 95, 31, 31, 3, 15, 15, 15, 15, 15, 15, 3, 19, 19, 19, 3, 222, 222, 223, 207, 207, 207, 
	195, 64, 0, 0, 0, 31, 31, 31, 15, 15, 13, 14, 28, 28, 28, 0, 194, 194, 195, 195, 195, 195, 195, 95, 31, 
	31, 15, 19, 19, 19, 3, 3, 3, 3, 207, 207, 207, 207, 255, 255, 255, 255, 255, 255, 255, 60, 60, 60, 44, 19, 
	19, 19, 34, 18, 18, 17, 143, 31, 31, 14, 211, 211, 211, 195, 195, 195, 195, 31, 31, 31, 15, 3, 3, 3, 2, 
	2, 2, 1, 31, 31, 31, 3, 223, 223, 223, 207, 195, 195, 194, 0, 0, 0, 0, 31, 31, 31, 14, 14, 2, 1, 
	19, 19, 19, 66, 207, 207, 207, 207, 207, 207, 194, 19, 19, 19, 2, 19, 19, 19, 2, 2, 2, 1, 15, 15, 15, 
	67, 223, 223, 207, 207, 207, 207, 207, 80, 16, 0, 0, 79, 15, 15, 15, 14, 14, 14, 92, 28, 12, 128, 211, 211, 
	195, 195, 195, 195, 199, 15, 15, 15, 15, 83, 19, 3, 3, 3, 3, 2, 19, 19, 3, 199, 207, 207, 207, 199, 195, 
	195, 195, 88, 24, 8, 8, 95, 31, 15, 3, 2, 2, 9, 12, 12, 12, 204, 211, 211, 195, 195, 195, 195, 203, 31, 
	31, 15, 207, 207, 207, 207, 195, 195, 195, 193, 19, 19, 3, 207, 223, 223, 207, 195, 195, 195, 193, 0, 0, 0, 14, 
	95, 31, 15, 14, 6, 2, 74, 95, 31, 15, 205, 195, 195, 195, 195, 195, 195, 207, 31, 31, 15, 10, 95, 31, 15, 
	14, 14, 6, 2, 3, 3, 3, 207, 223, 223, 207, 207, 195, 195, 196, 28, 28, 12, 2, 67, 3, 3, 2, 2, 2, 
	6, 31, 31, 15, 205, 223, 223, 207, 207, 207, 207, 207, 3, 3, 3, 2, 83, 19, 3, 2, 2, 2, 138, 95, 31, 
	15, 207, 207, 207, 203, 195, 195, 195, 207, 28, 28, 12, 27, 19, 19, 3, 3, 2, 2, 13, 12, 12, 12, 24, 19, 
	19, 3, 3, 3, 3, 31, 31, 31, 7, 15, 15, 15, 15, 15, 15, 3, 19, 19, 19, 3, 14, 15, 15, 15, 15, 
	15, 3, 2, 0, 0, 0, 15, 15, 15, 15, 15, 14, 14, 12, 12, 12, 4, 1, 3, 3, 3, 3, 3, 3, 15, 
	15, 15, 15, 7, 3, 3, 3, 3, 3, 3, 207, 207, 207, 207, 255, 255, 255, 255, 255, 255, 255, 188, 60, 48, 32, 
	31, 31, 19, 35, 18, 18, 18, 143, 31, 31, 3, 223, 223, 223, 207, 207, 195, 195, 95, 31, 19, 3, 15, 15, 15, 
	15, 10, 2, 2, 23, 23, 23, 7, 223, 223, 223, 207, 207, 195, 195, 68, 4, 4, 4, 31, 31, 19, 3, 2, 2, 
	2, 31, 31, 31, 14, 199, 199, 199, 199, 199, 199, 199, 31, 31, 31, 3, 31, 31, 31, 14, 14, 2, 2, 7, 7, 
	7, 7, 223, 222, 223, 207, 207, 207, 207, 156, 28, 28, 12, 15, 15, 3, 3, 3, 2, 2, 156, 28, 28, 0, 223, 
	223, 223, 207, 207, 207, 203, 15, 15, 3, 3, 31, 31, 31, 15, 15, 15, 3, 23, 19, 23, 7, 207, 207, 207, 207, 
	207, 207, 203, 80, 20, 20, 4, 31, 31, 19, 3, 2, 2, 2, 12, 12, 12, 12, 211, 211, 215, 199, 199, 199, 199, 
	31, 31, 31, 67, 207, 207, 207, 207, 207, 207, 198, 23, 23, 3, 71, 223, 223, 207, 207, 207, 207, 206, 12, 12, 0, 
	0, 95, 31, 3, 2, 2, 2, 1, 95, 31, 15, 129, 207, 207, 207, 207, 207, 195, 194, 31, 31, 3, 6, 95, 31, 
	15, 14, 2, 2, 1, 7, 7, 7, 203, 223, 223, 207, 207, 203, 195, 193, 84, 20, 4, 5, 79, 15, 3, 2, 2, 
	2, 5, 31, 31, 15, 205, 211, 215, 199, 199, 199, 199, 198, 15, 15, 15, 6, 95, 31, 15, 14, 10, 2, 65, 87, 
	19, 7, 199, 207, 207, 207, 207, 207, 207, 207, 28, 28, 12, 13, 95, 31, 3, 3, 2, 2, 73, 76, 12, 12, 196, 
	223, 223, 207, 207, 207, 207, 199, 31, 27, 3, 11, 79, 15, 15, 15, 15, 7, 2, 23, 23, 7, 207, 223, 223, 207, 
	207, 207, 207, 195, 4, 4, 4, 6, 95, 23, 3, 3, 2, 2, 13, 28, 28, 12, 204, 195, 199, 199, 199, 199, 199, 
	199, 31, 31, 7, 15, 95, 31, 15, 15, 15, 15, 194, 195, 199, 199, 255, 255, 255, 255, 255, 255, 255, 252, 60, 48, 
	32, 30, 95, 27, 35, 18, 18, 18, 158, 95, 31, 11, 205, 207, 207, 207, 207, 195, 195, 207, 15, 3, 3, 14, 15, 
	15, 15, 14, 2, 2, 3, 3, 3, 3, 207, 207, 207, 207, 207, 195, 195, 192, 0, 0, 0, 15, 15, 3, 3, 2, 
	2, 2, 15, 15, 15, 15, 198, 195, 195, 195, 195, 195, 195, 143, 15, 15, 3, 15, 15, 15, 15, 14, 2, 2, 3, 
	3, 3, 3, 206, 206, 207, 207, 207, 207, 207, 205, 12, 12, 12, 15, 15, 3, 3, 3, 2, 2, 140, 12, 12, 0, 
	205, 206, 207, 207, 207, 207, 207, 79, 15, 3, 3, 15, 15, 15, 15, 15, 15, 3, 3, 3, 3, 3, 206, 206, 207, 
	207, 207, 207, 207, 128, 0, 0, 0, 15, 15, 3, 3, 3, 1, 2, 12, 12, 12, 12, 194, 194, 195, 195, 195, 195, 
	195, 15, 15, 15, 3, 207, 207, 207, 207, 207, 207, 207, 3, 3, 3, 3, 207, 207, 207, 207, 207, 207, 207, 12, 12, 
	0, 0, 15, 15, 3, 2, 2, 2, 1, 143, 15, 15, 2, 207, 207, 207, 207, 207, 195, 195, 15, 15, 3, 3, 15, 
	15, 15, 14, 2, 2, 1, 3, 3, 3, 3, 207, 207, 207, 207, 207, 195, 195, 64, 0, 0, 0, 15, 15, 3, 2, 
	2, 2, 1, 15, 15, 15, 14, 195, 195, 195, 195, 195, 195, 194, 15, 15, 15, 2, 15, 15, 15, 14, 14, 2, 1, 
	67, 3, 3, 115, 255, 239, 207, 207, 207, 207, 255, 124, 44, 12, 60, 127, 47, 3, 3, 2, 2, 2, 76, 12, 12, 
	176, 255, 255, 207, 207, 207, 207, 247, 63, 63, 3, 51, 127, 63, 15, 15, 15, 11, 2, 3, 3, 3, 243, 255, 255, 
	223, 207, 207, 207, 243, 48, 48, 16, 48, 127, 63, 19, 3, 2, 2, 53, 60, 60, 28, 252, 243, 243, 227, 195, 195, 
	195, 243, 63, 63, 43, 51, 127, 63, 63, 31, 15, 15, 241, 243, 243, 243, 255, 255, 255, 255, 255, 255, 255, 253, 52, 
	56, 52, 46, 95, 31, 31, 30, 30, 30, 90, 91, 27, 7, 249, 239, 207, 207, 207, 207, 207, 251, 11, 11, 15, 62, 
	79, 15, 15, 14, 14, 14, 14, 15, 15, 15, 255, 223, 207, 207, 207, 207, 207, 200, 8, 8, 4, 62, 79, 15, 15, 
	14, 14, 14, 62, 15, 15, 15, 205, 207, 207, 207, 207, 195, 195, 243, 3, 3, 3, 62, 95, 15, 15, 14, 14, 14, 
	14, 15, 15, 15, 255, 255, 255, 255, 243, 195, 195, 207, 12, 12, 12, 47, 79, 15, 15, 15, 2, 2, 169, 76, 12, 
	12, 252, 239, 207, 203, 195, 195, 195, 255, 15, 15, 15, 55, 31, 15, 15, 15, 15, 7, 15, 15, 15, 15, 254, 223, 
	207, 207, 207, 207, 207, 206, 12, 12, 12, 63, 15, 15, 15, 15, 14, 14, 60, 24, 8, 8, 197, 199, 207, 207, 207, 
	207, 207, 191, 15, 11, 7, 255, 223, 207, 207, 207, 207, 207, 143, 15, 15, 15, 255, 255, 255, 255, 207, 207, 207, 140, 
	0, 0, 0, 15, 15, 15, 15, 14, 14, 14, 135, 11, 11, 7, 255, 207, 207, 207, 207, 207, 207, 123, 11, 15, 15, 
	63, 15, 15, 15, 14, 14, 14, 15, 15, 15, 15, 255, 207, 207, 207, 207, 207, 207, 132, 8, 8, 4, 63, 15, 15, 
	15, 14, 14, 14, 63, 15, 15, 14, 207, 207, 207, 207, 207, 207, 207, 63, 15, 15, 15, 63, 15, 15, 14, 10, 2, 
	2, 131, 3, 3, 3, 255, 254, 255, 255, 251, 195, 195, 128, 0, 0, 0, 31, 15, 15, 15, 15, 14, 14, 156, 12, 
	12, 12, 255, 206, 207, 195, 195, 195, 195, 63, 15, 15, 15, 63, 15, 15, 3, 3, 3, 3, 15, 15, 15, 15, 255, 
	207, 207, 207, 207, 207, 207, 0, 0, 0, 0, 63, 15, 15, 15, 14, 14, 2, 56, 8, 4, 12, 207, 207, 207, 207, 
	207, 203, 203, 63, 15, 15, 11, 63, 15, 15, 15, 15, 15, 78, 207, 207, 199, 211, 255, 255, 255, 255, 255, 255, 254, 
	52, 56, 52, 40, 95, 31, 31, 46, 30, 30, 29, 75, 27, 7, 165, 255, 255, 239, 207, 207, 207, 234, 59, 59, 63, 
	30, 127, 63, 15, 14, 14, 14, 13, 15, 15, 15, 239, 255, 255, 239, 207, 207, 207, 205, 8, 8, 4, 53, 127, 63, 
	63, 14, 14, 14, 61, 63, 63, 15, 205, 207, 207, 207, 207, 195, 195, 242, 51, 51, 51, 58, 127, 63, 31, 14, 14, 
	14, 13, 15, 15, 15, 223, 255, 255, 255, 243, 243, 243, 251, 60, 60, 60, 61, 127, 63, 15, 15, 2, 2, 117, 124, 
	60, 12, 252, 255, 255, 255, 195, 195, 195, 247, 63, 63, 63, 55, 127, 63, 63, 15, 3, 3, 2, 3, 3, 3, 255, 
	255, 255, 255, 207, 207, 207, 207, 12, 12, 12, 62, 127, 63, 63, 63, 14, 14, 61, 52, 56, 56, 196, 199, 207, 207, 
	207, 207, 207, 255, 63, 59, 55, 255, 255, 255, 255, 207, 207, 207, 206, 15, 15, 15, 255, 255, 255, 255, 255, 255, 255, 
	252, 48, 0, 0, 62, 127, 15, 15, 14, 14, 14, 186, 123, 11, 7, 253, 255, 255, 207, 207, 207, 207, 251, 59, 63, 
	31, 62, 63, 63, 15, 14, 14, 14, 15, 15, 15, 15, 255, 255, 255, 207, 207, 207, 207, 200, 8, 8, 4, 63, 63, 
	63, 31, 14, 14, 14, 63, 63, 63, 15, 206, 207, 207, 207, 207, 207, 207, 187, 63, 63, 63, 59, 63, 63, 15, 14, 
	2, 2, 131, 67, 3, 3, 250, 190, 255, 255, 191, 115, 179, 113, 48, 48, 48, 63, 63, 15, 15, 15, 14, 14, 60, 
	60, 12, 12, 253, 254, 127, 247, 195, 67, 195, 255, 255, 127, 63, 255, 255, 63, 23, 3, 3, 3, 15, 15, 15, 15, 
	254, 254, 63, 63, 15, 3, 3, 192, 192, 0, 0, 204, 204, 12, 12, 12, 12, 12, 204, 140, 12, 12, 204, 140, 204, 
	128, 192, 128, 192, 204, 140, 12, 12, 207, 143, 15, 15, 11, 3, 3, 195, 131, 0, 0, 243, 243, 243, 243, 243, 243, 
	243, 52, 48, 48, 32, 23, 19, 19, 34, 18, 18, 17, 131, 19, 19, 2, 199, 195, 195, 195, 195, 195, 195, 19, 19, 
	19, 3, 3, 3, 3, 2, 2, 2, 1, 7, 3, 3, 3, 211, 211, 211, 195, 195, 195, 195, 0, 0, 0, 0, 7, 
	3, 3, 2, 2, 2, 1, 19, 19, 19, 2, 195, 195, 195, 195, 195, 195, 194, 7, 3, 3, 2, 19, 19, 19, 2, 
	2, 2, 1, 3, 3, 3, 67, 199, 199, 195, 195, 195, 195, 195, 80, 16, 0, 0, 67, 3, 3, 3, 2, 2, 2, 
	68, 4, 0, 128, 211, 211, 195, 195, 195, 195, 195, 3, 3, 3, 3, 71, 7, 3, 3, 3, 3, 2, 19, 19, 3, 
	195, 195, 195, 195, 195, 195, 195, 195, 68, 4, 0, 0, 83, 19, 3, 3, 2, 2, 1, 0, 0, 0, 192, 199, 199, 
	195, 195, 195, 195, 195, 19, 19, 3, 195, 195, 195, 195, 195, 195, 195, 193, 3, 7, 3, 195, 211, 211, 195, 195, 195, 
	195, 193, 0, 0, 0, 2, 67, 7, 3, 2, 2, 2, 66, 83, 19, 3, 193, 195, 195, 195, 195, 195, 195, 195, 3, 
	7, 3, 2, 83, 19, 3, 2, 2, 2, 2, 3, 3, 3, 195, 195, 199, 195, 195, 195, 195, 192, 16, 16, 0, 2, 
	67, 3, 3, 2, 2, 2, 2, 3, 7, 3, 193, 211, 211, 195, 195, 195, 195, 195, 3, 3, 3, 2, 67, 7, 3, 
	2, 2, 2, 130, 83, 19, 3, 195, 195, 195, 195, 195, 195, 195, 195, 0, 4, 0, 2, 83, 19, 3, 3, 2, 2, 
	129, 64, 0, 0, 192, 195, 199, 195, 195, 195, 195, 211, 19, 19, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 7, 
	3, 210, 211, 211, 195, 195, 195, 195, 194, 0, 0, 0, 7, 3, 7, 3, 3, 2, 2, 16, 16, 16, 0, 193, 195, 
	195, 195, 195, 195, 195, 199, 3, 3, 3, 19, 19, 19, 3, 3, 3, 3, 195, 195, 195, 195, 255, 255, 254, 254, 254, 
	254, 253, 124, 60, 60, 44, 20, 16, 16, 32, 16, 16, 16, 12, 28, 28, 12, 192, 192, 192, 192, 192, 192, 192, 92, 
	28, 28, 12, 4, 0, 0, 0, 0, 0, 0, 12, 12, 12, 0, 220, 220, 220, 204, 200, 192, 192, 0, 0, 0, 0, 
	12, 12, 12, 12, 12, 0, 0, 16, 16, 16, 0, 204, 204, 204, 204, 204, 204, 192, 0, 0, 0, 0, 16, 16, 16, 
	0, 0, 0, 0, 12, 12, 12, 0, 204, 204, 204, 204, 204, 204, 204, 16, 16, 16, 0, 12, 12, 12, 12, 12, 12, 
	12, 12, 12, 12, 0, 208, 208, 208, 192, 192, 192, 192, 12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 16, 16, 
	16, 0, 204, 204, 204, 200, 192, 192, 192, 4, 8, 8, 0, 28, 28, 28, 0, 0, 0, 0, 12, 12, 12, 12, 192, 
	192, 192, 192, 192, 192, 192, 28, 28, 28, 76, 204, 204, 204, 192, 192, 192, 192, 192, 192, 0, 68, 220, 220, 204, 192, 
	192, 192, 192, 0, 0, 0, 0, 76, 12, 12, 12, 12, 0, 0, 28, 28, 12, 140, 192, 192, 192, 192, 192, 192, 192, 
	12, 12, 12, 0, 92, 28, 12, 12, 12, 8, 0, 0, 0, 0, 196, 204, 204, 204, 204, 192, 192, 192, 28, 28, 12, 
	0, 64, 0, 0, 0, 0, 0, 0, 12, 12, 12, 204, 220, 220, 204, 204, 204, 204, 204, 0, 0, 0, 0, 64, 0, 
	0, 0, 0, 0, 4, 28, 28, 12, 207, 207, 204, 207, 195, 192, 195, 199, 31, 28, 12, 15, 19, 16, 0, 0, 0, 
	0, 8, 12, 12, 12, 15, 19, 16, 0, 0, 0, 0, 8, 28, 28, 12, 11, 15, 15, 13, 12, 12, 4, 3, 19, 
	16, 0, 12, 13, 12, 12, 12, 12, 4, 3, 3, 3, 3, 15, 15, 12, 12, 12, 12, 12, 8, 12, 12, 12, 3, 
	3, 0, 0, 0, 0, 0, 8, 12, 12, 12, 15, 2, 0, 0, 0, 0, 0, 199, 206, 204, 204, 253, 255, 255, 255, 
	255, 255, 255, 252, 60, 48, 32, 30, 95, 27, 35, 18, 18, 18, 158, 95, 31, 11, 221, 223, 223, 207, 207, 195, 195, 
	223, 31, 19, 3, 14, 15, 15, 15, 14, 2, 2, 19, 23, 23, 7, 223, 223, 223, 207, 207, 195, 195, 192, 4, 4, 
	4, 30, 31, 19, 3, 2, 2, 2, 31, 31, 31, 15, 198, 195, 199, 199, 199, 199, 199, 159, 31, 31, 3, 31, 31, 
	31, 15, 14, 2, 2, 3, 7, 7, 7, 222, 222, 223, 207, 207, 207, 207, 221, 28, 28, 12, 15, 15, 3, 3, 3, 
	2, 2, 156, 28, 28, 0, 221, 222, 223, 207, 207, 207, 207, 79, 15, 3, 3, 31, 31, 31, 15, 15, 15, 3, 19, 
	23, 19, 7, 206, 206, 207, 207, 207, 207, 207, 208, 20, 20, 4, 31, 31, 19, 3, 3, 2, 2, 12, 12, 12, 12, 
	214, 214, 211, 199, 199, 199, 199, 31, 31, 31, 3, 207, 207, 207, 207, 207, 207, 207, 19, 23, 23, 7, 223, 223, 223, 
	207, 207, 207, 207, 12, 12, 0, 0, 31, 31, 19, 2, 2, 2, 1, 159, 31, 31, 2, 207, 207, 207, 207, 207, 195, 
	195, 31, 31, 19, 3, 31, 31, 31, 14, 2, 2, 1, 3, 7, 7, 7, 223, 223, 223, 207, 207, 195, 195, 84, 20, 
	20, 4, 15, 15, 3, 2, 2, 2, 1, 31, 31, 31, 14, 211, 211, 215, 199, 199, 199, 198, 15, 15, 15, 2, 31, 
	31, 31, 14, 14, 2, 1, 87, 23, 23, 71, 207, 207, 207, 207, 207, 207, 207, 92, 28, 12, 12, 95, 31, 3, 3, 
	2, 2, 2, 76, 12, 12, 128, 223, 223, 207, 207, 207, 207, 199, 31, 31, 3, 3, 79, 15, 15, 15, 15, 11, 2, 
	23, 23, 7, 199, 223, 223, 207, 207, 207, 207, 195, 0, 4, 4, 4, 95, 31, 3, 3, 2, 2, 2, 28, 28, 12, 
	204, 195, 199, 199, 199, 199, 199, 199, 31, 31, 11, 3, 95, 31, 15, 15, 15, 15, 193, 199, 195, 199, 255, 255, 255, 
	255, 255, 255, 255, 253, 52, 56, 52, 46, 95, 31, 31, 30, 30, 30, 90, 91, 27, 7, 249, 255, 255, 223, 207, 207, 
	207, 251, 59, 59, 63, 62, 127, 63, 15, 14, 14, 14, 14, 15, 15, 15, 255, 255, 255, 207, 207, 207, 207, 201, 8, 
	8, 4, 62, 127, 63, 63, 14, 14, 14, 62, 63, 63, 15, 205, 207, 207, 207, 207, 195, 195, 243, 51, 51, 51, 62, 
	127, 63, 15, 14, 14, 14, 14, 15, 15, 15, 223, 255, 255, 255, 243, 243, 243, 255, 60, 60, 60, 62, 127, 31, 15, 
	15, 2, 2, 185, 124, 28, 12, 252, 255, 255, 251, 195, 195, 195, 255, 63, 63, 63, 59, 63, 63, 63, 15, 3, 3, 
	3, 3, 3, 3, 254, 255, 255, 255, 207, 207, 207, 206, 12, 12, 12, 63, 63, 63, 63, 31, 14, 14, 60, 56, 56, 
	40, 197, 199, 207, 207, 207, 207, 207, 191, 63, 59, 55, 255, 255, 255, 255, 207, 207, 207, 143, 15, 15, 15, 255, 255, 
	255, 255, 255, 255, 255, 188, 48, 0, 0, 63, 63, 15, 15, 14, 14, 14, 183, 59, 11, 7, 255, 255, 255, 207, 207, 
	207, 207, 123, 59, 63, 15, 63, 63, 63, 15, 14, 14, 14, 15, 15, 15, 15, 255, 255, 255, 207, 207, 207, 207, 196, 
	8, 8, 4, 63, 63, 63, 15, 14, 14, 14, 63, 63, 47, 15, 207, 207, 207, 207, 207, 207, 207, 63, 63, 63, 47, 
	63, 63, 63, 14, 10, 2, 2, 131, 3, 3, 3, 255, 190, 255, 255, 187, 179, 179, 112, 48, 48, 48, 63, 63, 15, 
	15, 15, 14, 14, 60, 60, 12, 12, 255, 190, 63, 243, 131, 3, 195, 255, 191, 63, 63, 255, 191, 63, 3, 3, 3, 
	3, 15, 15, 15, 15, 255, 191, 63, 63, 11, 3, 3, 192, 128, 0, 0, 204, 140, 12, 12, 12, 12, 12, 204, 140, 
	12, 76, 204, 140, 204, 128, 192, 192, 192, 204, 140, 12, 76, 207, 143, 15, 15, 7, 3, 67, 195, 131, 0, 80, 255, 
	255, 255, 255, 255, 255, 254, 60, 60, 48, 32, 95, 31, 19, 34, 18, 18, 17, 79, 31, 15, 129, 223, 223, 207, 207, 
	207, 195, 194, 31, 31, 3, 6, 79, 15, 15, 14, 2, 2, 1, 23, 23, 7, 203, 223, 223, 207, 207, 203, 195, 193, 
	4, 4, 4, 5, 95, 31, 3, 2, 2, 2, 5, 31, 31, 15, 205, 195, 199, 199, 199, 199, 199, 198, 31, 31, 15, 
	6, 95, 31, 15, 14, 10, 2, 1, 7, 3, 7, 199, 223, 223, 207, 207, 207, 207, 207, 28, 28, 12, 13, 79, 15, 
	3, 3, 2, 2, 73, 92, 28, 12, 196, 223, 223, 207, 207, 207, 207, 199, 15, 11, 3, 11, 95, 31, 15, 15, 15, 
	7, 2, 23, 23, 7, 207, 207, 207, 207, 207, 207, 207, 195, 20, 20, 4, 6, 95, 23, 3, 3, 2, 2, 13, 12, 
	12, 12, 204, 211, 215, 199, 199, 199, 199, 199, 31, 31, 7, 207, 207, 207, 207, 207, 207, 207, 194, 19, 23, 7, 219, 
	223, 223, 207, 207, 207, 207, 204, 204, 192, 0, 14, 31, 27, 3, 2, 2, 2, 14, 31, 31, 11, 13, 15, 15, 15, 
	15, 3, 3, 31, 31, 19, 3, 30, 31, 31, 15, 14, 2, 2, 3, 7, 7, 7, 31, 31, 31, 15, 15, 3, 3, 
	16, 20, 20, 4, 14, 15, 3, 3, 2, 2, 2, 30, 31, 31, 15, 22, 19, 23, 7, 7, 7, 7, 15, 15, 15, 
	3, 31, 31, 31, 15, 14, 2, 2, 19, 23, 23, 7, 14, 15, 15, 15, 15, 15, 15, 13, 12, 12, 12, 15, 15, 
	3, 3, 3, 2, 2, 12, 12, 12, 0, 13, 14, 15, 15, 15, 15, 15, 15, 15, 3, 3, 15, 15, 15, 15, 15, 
	15, 3, 3, 7, 3, 7, 15, 13, 14, 15, 14, 15, 13, 2, 6, 6, 6, 14, 78, 66, 130, 129, 130, 130, 142, 
	143, 141, 142, 135, 134, 131, 134, 134, 134, 198, 142, 78, 142, 130, 142, 77, 78, 78, 78, 79, 77, 66, 71, 70, 71, 
	66, 66, 2, 2, 2, 66, 2, 2, 2, 1, 2, 2, 2, 3, 1, 2, 3, 2, 3, 2, 2, 2, 2, 2, 2, 
	2, 2, 2, 1, 2, 2, 2, 3, 1, 2, 3, 2, 3, 2, 2, 2, 2, 2, 2, 252, 252, 252, 252, 252, 252, 
	252, 12, 12, 28, 24, 20, 4, 4, 4, 4, 4, 4, 160, 16, 16, 12, 204, 204, 204, 204, 204, 204, 204, 12, 12, 
	4, 0, 28, 20, 16, 16, 16, 0, 0, 0, 0, 0, 76, 204, 204, 204, 204, 204, 204, 204, 0, 0, 0, 0, 64, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 204, 204, 204, 204, 204, 204, 204, 12, 12, 0, 0, 80, 16, 16, 16, 
	0, 0, 0, 0, 0, 0, 204, 204, 204, 204, 204, 204, 204, 204, 76, 12, 0, 0, 64, 0, 0, 0, 0, 0, 0, 
	64, 0, 0, 204, 204, 204, 204, 204, 204, 204, 204, 12, 12, 0, 0, 92, 16, 16, 16, 0, 0, 0, 0, 0, 0, 
	204, 204, 204, 204, 204, 204, 204, 204, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 12, 0, 0, 204, 204, 204, 
	204, 204, 204, 204, 204, 12, 12, 0, 204, 204, 204, 204, 204, 204, 204, 204, 12, 12, 0, 220, 220, 220, 220, 220, 204, 
	204, 204, 12, 12, 0, 16, 80, 16, 16, 16, 0, 0, 64, 64, 0, 0, 204, 204, 204, 204, 204, 204, 204, 204, 12, 
	12, 0, 4, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 220, 220, 204, 220, 204, 204, 204, 0, 0, 0, 16, 
	80, 16, 16, 16, 0, 0, 0, 0, 0, 0, 204, 204, 204, 204, 204, 204, 204, 204, 12, 12, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 220, 220, 216, 220, 220, 200, 204, 204, 12, 8, 0, 28, 28, 24, 16, 16, 0, 0, 
	128, 64, 0, 0, 204, 204, 200, 192, 192, 192, 192, 140, 12, 12, 12, 12, 12, 12, 12, 12, 4, 0, 12, 12, 8, 
	0, 220, 220, 212, 208, 208, 192, 192, 140, 12, 12, 12, 220, 220, 220, 220, 220, 204, 204, 140, 12, 8, 0, 220, 220, 
	212, 208, 208, 192, 192, 76, 12, 4, 0, 28, 28, 20, 16, 16, 0, 0, 204, 204, 196, 192, 246, 253, 127, 58, 61, 
	57, 53, 53, 52, 52, 52, 52, 52, 48, 48, 48, 0, 0, 0, 0, 0, 
};
