#include <graphics.h>

int main(){
    int gm = DETECT, gd
    initgraph(&gm,&gd,NULL)
    int left = 150, top = 150
    int right = 300, bottom = 300
    rectangle(left, top, right, bottom)
    getch();
    closegraph();
    return 0
}

