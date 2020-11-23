#include <graphics.h>

int main() {

    int gm = DETECT, gd

    initgraph(&gm,&gd,NULL)

    int x = 150, y = 200, r = 35

    circle(x,y,r)

    delay(1000)

    int n = 400


    for (int i=1;i < n ;i++) {
        if (i<=n/4) {
            x += 1;
            y += 1;
            circle(x,y,r);
        } else if (i>n/4 && i<=n/2) {
            x += 1;
            y -= 1;
            circle(x,y,r);
        } else if (i>n/2 && i<=(n/4)*3){
            x -= 1;
            y -= 1;
            circle(x,y,r);
        } else if (i>(n/4)*3 && i<=n) {
            x -= 1;
            y += 1;
            circle(x,y,r);
        }
        delay(8);
        cleardevice();
    }

    circle(x,y,r);
    getch();
    closegraph();
    
    return 0;

}
