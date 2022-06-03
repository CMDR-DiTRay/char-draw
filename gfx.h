typedef struct gfxScreen {
	unsigned long x;
	unsigned long y;
} GFXScreen;

//Get character type by by a line angle
unsigned GetCharType (double a);

void SetGFXScreen (GFXScreen * sr, unsigned long x, unsigned long y);
void DrawLine (
	GFXScreen const * sr,
	unsigned long x1,
	unsigned long y1,
	unsigned long x2,
	unsigned long y2
);
