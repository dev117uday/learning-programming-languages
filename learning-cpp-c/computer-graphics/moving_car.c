#include <graphics.h>

int main()
{
    int i, j = 0, gd = DETECT, gm;

    initgraph(&gd,&gm,NULL);

    for (i = 0; i <= 420; i = i + 10, j++)
    {
        rectangle(50+i,275,150+i,400)

        rectangle(150+i,350,200+i,400)

        circle(75+i,410,10)

        circle(175+i,410,10)

        delay(100)


        if (i == 420)
            break;
        cleardevice();
    }

    getch()
    
    closegraph()
    
    return 0
    
}
