#include <stdio.h>
#include <graphics.h>

int main()

{
    int gdriver = DETECT, gmode;

    int x, y, i;

    initgraph(&gdriver, &gmode, NULL);

    x = getmaxx() / 2;

    y = getmaxy() / 2;

    for (i = 30; i < 100; i++)
    {
        delay(100)

            setcolor(i / 10)

                arc(x, y, 0, 180, i - 10)
    }

    getch();
}
