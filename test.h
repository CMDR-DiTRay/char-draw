const long TEST_SCR_RES_X = 80;
const long TEST_SCR_RES_Y = 21;

int Test_SetGFXScreen () {
	printf("SetGFXScreen text\n");
    
    GFXScreen scr;
    SetGFXScreen(&scr,TEST_SCR_RES_X,TEST_SCR_RES_Y);
    
    printf("  Screen resoluton (desired):\n");
    printf("    X = %lu, Y = %lu\n", TEST_SCR_RES_X, TEST_SCR_RES_Y);
    printf("  Screen resoluton (actual):\n");
    printf("    X = %lu, Y = %lu\n", scr.x, scr.y);

	if (scr.x != TEST_SCR_RES_X || scr.y != TEST_SCR_RES_Y) {
		printf("ERROR:\n");
		printf("  SetGFXScreen test failed!\n");
		return 1;
	}

	return 0;
}
