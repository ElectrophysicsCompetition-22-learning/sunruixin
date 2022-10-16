#include<stdio.h>
int main2()
{
	int h, f, x, y;
	h = 16;
	f = 40;
	y = (f - 2*h) / 2;
	x = h-y;
	printf("%d%d\n", x, y);
    return 0;
}