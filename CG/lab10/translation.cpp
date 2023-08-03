//2D Transformation of a line

#include <graphics.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm;
    int x1, y1, x2, y2, tx, ty;
    initgraph(&gd, &gm, (char*)" ");

    printf("Enter the coordinates of the line: (x1,y1,x2,y2)\n");
    scanf("%d,%d,%d,%d", &x1, &y1, &x2, &y2);

    line(x1, y1, x2, y2);

    printf("Enter the translation factor: (tx,ty)\n");
    scanf("%d,%d", &tx, &ty);

    x1 += tx;
    y1 += ty;
    x2 += tx;
    y2 += ty;

    line(x1, y1, x2, y2);

    getch();
    closegraph();
    return 0;
}