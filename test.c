#include <stdio.h>
#include "gfx.h"
#include "test.h"

int main () {
	
	//SetGFXScreen test
	const short TEST1_LEN = 5;
	struct setGFXScreen_test test1 [TEST1_LEN];
	
	test1[0].x   = 80;
	test1[0].y   = 21;
	
	test1[1].x   = 10;
	test1[1].y   = 0;
	
	test1[2].x   = 0;
	test1[2].y   = 34;
	
	test1[3].x   = 0;
	test1[3].y   = 0;

	test1[4].x   = 999999999999999;
	test1[4].y   = 10999999999999999;

	printf("Testing SetGFXScreen\n\n");
	
	for (int i = 0; i < TEST1_LEN; i++) {
		long x 	= test1[i].x;
		long y 	= test1[i].y;

		printf("Pass %d\n", i);
		printf("  X = %lu, Y = %lu\n", x, y);
		
		if (Test_SetGFXScreen(x, y) != 0)
			printf("ERROR!\n");
		else
			printf("OK\n");
	}
	
	return 0;
}
