//WAP in c to draw a midpoint ellipse using mid point ellipse algorithm in c

#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void drawellipse(int xc, int yc, int x, int y) {
    putpixel(xc+x, yc+y, 2);
    putpixel(xc-x, yc+y, 2);
    putpixel(xc+x, yc-y, 7);
    putpixel(xc-x, yc-y, 7);
    
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)" ");

    int xc, yc, rx, ry, x, y, pk;

    printf("Enter the center of ellipse: ");
    scanf("%d %d", &xc, &yc);
    printf("Enter the radius of ellipse: ");
    scanf("%d %d", &rx, &ry);

   

    x = 0;
    y = ry;
    pk = ry*ry - rx*rx*ry + rx*rx/4;

    

    while(2*ry*ry*x < 2*rx*rx*y) {
        if(pk < 0) {
            x++;
            pk = pk + 2*ry*ry*x + ry*ry;
        }
        else {
            x++;
            y--;
            pk = pk + 2*ry*ry*x - 2*rx*rx*y - ry*ry;
        }
        drawellipse(xc, yc, x, y);
        delay(100);
        outtextxy(getmaxx()/2, getmaxy()-50, (char*) "Mid Point Ellipse Generation Algorithm");
    }  

    pk = ry*ry*(x+0.5)*(x+0.5) + rx*rx*(y-1)*(y-1) - rx*rx*ry*ry;

    while(y >= 0) {
        if(pk > 0) {
            y--;
            pk = pk - 2*rx*rx*y + rx*rx;
        }
        else {
            x++;
            y--;
            pk = pk + 2*ry*ry*x - 2*rx*rx*y + rx*rx;
        }
        drawellipse(xc, yc, x, y);
        delay(100);
        outtextxy(getmaxx()/2, getmaxy()-50, (char*) "Mid Point Ellipse Generation Algorithm");
    }  

    getch();
    closegraph();
    return 0;
}

