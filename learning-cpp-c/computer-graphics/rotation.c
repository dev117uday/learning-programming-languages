#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main()
{
    intgd = 0, gm, x1 = 100, y1 = 100, x2 = 100, y2 = 200;
    double s, c, angle = 45;
    initgraph(&gd, &gm, NULL);
    cleardevice();
    line(x1, y1, x2, y2);
    c = cos(angle * 3.14 / 180);
    s = sin(angle * 3.14 / 180);
    x1 = floor(x1 * c + y1 * s);
    y1 = floor(-x1 * s + y1 * c);
    x2 = floor(x2 * c + y2 * s);
    y2 = floor(-x2 * s + y2 * c);
    line(x1, y1, x2, y2);
    getch();
    closegraph();
    return 0;
}