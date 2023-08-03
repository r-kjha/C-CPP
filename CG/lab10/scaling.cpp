//2D Scaling of a line

#include <graphics.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm;
    float x1, y1, x2, y2, tx, ty;
    initgraph(&gd, &gm, (char*)" ");

    printf("Enter the coordinates of the line: (x1,y1,x2,y2)\n");
    scanf("%f,%f,%f,%f", &x1, &y1, &x2, &y2);

    line(x1, y1, x2, y2);

    printf("Enter the scaling factor: (tx,ty)\n");
    scanf("%f,%f", &tx, &ty);    x1 *= tx;
    y1 *= ty;
    x2 *= tx;
    y2 *= ty;

    line(x1, y1, x2, y2);

    getch();
    closegraph();
    return 0;
}