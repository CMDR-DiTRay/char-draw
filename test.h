struct setGFXScreen_test {
    long x;
    long y;
};

int Test_SetGFXScreen (const long x, const long y) {
    GFXScreen scr;
	SetGFXScreen(&scr, x, y);

	//Check if the function modifies the GFXScreen values correctly
    printf("  Screen resoluton (expected)\n");
    printf("    X = %lu, Y = %lu\n", x, y);
    printf("  Screen resoluton (actual)\n");
    printf("    X = %lu, Y = %lu\n", scr.x, scr.y);

	if (scr.x != x || scr.y != y) {
		printf("  Value change test failed!\n");
		return 1;
	}

	return 0;
}
