#include <stdio.h>
#include "gfx.h"

int main () {
	GFXScreen scr;
	SetGFXScreen(&scr,80,21);

	printf("Screen resoluton:\n");
	printf("X = %ld, Y = %ld\n", scr.x, scr.y);

	return 0;
}
