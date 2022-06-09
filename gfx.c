#include "gfx.h"

unsigned GetCharType (double a) {
	if ((a >= 0 && a < 22.5) ||
		(a >= 337.5 && a < 0))
		return 1;
	if (a >= 22.5 && a < 67.5)
		return 2;
	if (a >= 67.5 && a < 112.5)
		return 3;
	if (a >= 112.5 && a < 157.5)
		return 4;
	if (a >= 157.5 && a < 202.5)
		return 5;
	if (a >= 202.5 && a < 247.5)
		return 6;
	if (a >= 247.5 && a < 292.5)
		return 7;
	if (a >= 292.5 && a < 337.5)
		return 8;
	
	return 0;
}

void SetGFXScreen (GFXScreen * sr, unsigned long x, unsigned long y) {
	sr->x = x;
	sr->y = y;
}

void DrawLine (
	GFXScreen const * sr,
    unsigned long x1,
    unsigned long y1,
    unsigned long x2,
    unsigned long y2
) {
	//If the line is completely off screen, there is no need to draw it 
	if (
		(x1 > sr->x) &&
		(x1 > sr->x) &&
		(y2 > sr->y) &&
		(y2 > sr->y)
	)
		return;

	
}
