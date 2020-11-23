#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int x1 = 30, y1 = 30, x2 = 100, y2 = 100 , x =20 , y = 40;
    int gdriver = DETECT, gmode, errorcode;
    rectangle(x1, y1, x2, y2);
    rectangle(x1, y1, x2 * x, y2);
    rectangle(x1, y1, x2, y2 * y);
    getch();
    closegraph();
}