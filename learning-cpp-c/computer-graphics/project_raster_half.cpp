#include "graphics.h"

void drawGrid();
void boundaryFill(int, int, int, int);
int isTrue(int, int);
void drawPixel();

int ix = 12;
int jx = 12;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    drawGrid();
    drawPixel();
    getch();
    closegraph();
}

void drawGrid()
{
    int cell = 10;
    int size = 30;
    setcolor(GREEN);
    for (int i = 0; i < size; i++)
    {
        line(0, i * cell, size * cell, i * cell);
        line(i * cell, 0, i * cell, size * cell);
    }
}

void drawPixel() 
{

    for (int y = 12; y <= 280; y += 10) 
    {
        for (int x = 12; x <= 280; x += 10) 
        {
            int ans = isTrue(x, y);
            if (ans == 1) 
            {
                boundaryFill(x, y, WHITE, GREEN);
            }
            else 
            {
                boundaryFill(x, y, DARKGRAY, GREEN);
            }
        }
    }

}

void boundaryFill(int x, int y, int fill_color, int boundary_color)
{
    if (getpixel(x, y) != boundary_color &&
        getpixel(x, y) != fill_color)
    {
        putpixel(x, y, fill_color);
        boundaryFill(x + 1, y, fill_color, boundary_color);
        boundaryFill(x, y + 1, fill_color, boundary_color);
        boundaryFill(x - 1, y, fill_color, boundary_color);
        boundaryFill(x, y - 1, fill_color, boundary_color);
    }
}

int isTrue(int x, int y) {

    if (x == 32) {
        if (y >= 40 && y <= 110) {
            return 1;
        }
        else if (y >= 140 && y <= 180) {
            return 1;
        }
    }
    else if (x == 42) {
        if (y > 101 && y < 109) {
            return 1;
        }
        else if (y >= 170 && y <= 180) {
            return 1;
        }
    }
    else if (x == 52) {
        if (y > 101 && y < 109) {
            return 1;
        }
        else if (y >= 170 && y <= 180) {
            return 1;
        }
    }
    else if (x == 62) {
        if (y >= 40 && y <= 110) {
            return 1;
        }
        else if (y >= 140 && y <= 200) {
            return 1;
        }
    }
    else if (x == 82) {
        if (y >= 40 && y <= 110) {
            return 1;
        }
        else if (y >= 140 && y <= 200) {
            return 1;
        }
    }
    else if (x == 92) {
        if (y >= 40 && y <= 110) {
            return 1;
        }
        else if (y >= 140 && y <= 170) {
            return 1;
        }
    }
    else if (x == 102) {
        if (y >= 50 && y <= 100) {
            return 1;
        }
        else if (y >= 140 && y <= 170) {
            return 1;
        }
    }
    else if (x == 112) {
        if (y >= 60 && y <= 90) {
            return 1;
        }
        else if (y >= 140 && y <= 200) {
            return 1;
        }
    }
    else if (x == 132) {
        if (y >= 40 && y <= 110) {
            return 1;
        }
        else if (y >= 140 && y <= 200) {
            return 1;
        }
    }
    else if (x == 142) {
        if (y >= 40 && y <= 80) {
            return 1;
        }
        else if (y >= 140 && y <= 200) {
            return 1;
        }
    }
    else if (x == 152) {
        if (y >= 40 && y <= 80) {
            return 1;
        }
        else if (y >= 150 && y <= 190) {
            return 1;
        }
    }
    else if (x == 162) {
        if (y >= 40 && y <= 110) {
            return 1;
        }
        else if (y >= 160 && y <= 180) {
            return 1;
        }
    }
    else if (x == 182) {
        if (y >= 40 && y <= 84) {
            return 1;
        }
        else if (y >= 140 && y <= 200) {
            return 1;
        }
    }
    else if (x == 192) {
        if (y >= 80 && y <= 89) {
            return 1;
        }
        else if (y >= 140 && y <= 170) {
            return 1;
        }
    }
    else if (x == 202) {
        if (y >= 40 && y <= 110) {
            return 1;
        }
        else if (y >= 140 && y <= 170) {
            return 1;
        }
    }
    else if (x == 212) {
        if (y >= 140 && y <= 200) {
            return 1;
        }
    }
    else if (x == 232) {
        if (y >= 140 && y <= 190) {
            return 1;
        }
    }
    else if (x == 242) {
        if (y >= 190 && y <= 200) {
            return 1;
        }
    }
    else if (x == 252) {
        if (y >= 190 && y <= 200) {
            return 1;
        }
    }
    else if (x == 262) {
        if (y >= 140 && y <= 190) {
            return 1;
        }
    }
}



