#include <graphics.h>

int main(){

    int gm = DETECT, gd

    initgraph(&gm,&gd,NULL)

    int x = 200, y = 200, radius = 5

    for (int i=0; i<5; i++) 
    {
        radius = radius + i*10;
        circle(x,y,radius);
    }
    
    getch();
    closegraph();
    
    return 0;

}
