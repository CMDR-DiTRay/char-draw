#include <stdio.h>
#include "gfx.h"
#include "test.h"

int main () {
	
	if(Test_SetGFXScreen())
		return 1;
	printf("OK\n\n");

	return 0;
}
