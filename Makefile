gfx:
	gcc gfx.c main.c -o gfx

test:
	gcc gfx.c test.c -o test

clean:
	rm gfx test
