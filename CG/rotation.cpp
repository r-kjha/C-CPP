//2D Rotation of a line

#include <graphics.h>
#include <stdio.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    double x1, y1, x2, y2, r11, r12, r21, r22, xn, yn;
    float theta;

    initgraph(&gd, &gm, (char*)" ");

    printf("Enter the coordinate of the line: (x1,y1,x2,y2)\n");
    scanf("%lf,%lf,%lf,%lf", &x1, &y1, &x2, &y2);

    line(x1, y1, x2, y2);

    printf("Enter the angle of rotation: (theta)\n");
    scanf("%f", &theta);

    r11 = cos(theta*3.1428/180);
    r12 = sin(theta*3.1428/180);
    r21 = -sin(theta*3.1428/180);
    r22 = cos(theta*3.1428/180);
    
    xn=((x2*r11)-(y2*r12));
    yn=((x2*r12)+(y2*r11));

    line(x1, y1, xn, yn);

    getch();
    closegraph();
    return 0;
}
