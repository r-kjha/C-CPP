//2D Rotation of a line

#include <graphics.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm;
    float x1, y1, x2, y2, theta;

    initgraph(&gd, &gm, (char*)" ");

    printf("Enter the coordinate of the line: (x1,y1,x2,y2)\n");
    scanf("%f,%f,%f,%f", &x1, &y1, &x2, &y2);

    line(x1, y1, x2, y2);

    printf("Enter the angle of rotation: (theta)\n");
    scanf("%f", &theta);

    r11 = 
    

    getch();
    closegraph();
    return 0;
}