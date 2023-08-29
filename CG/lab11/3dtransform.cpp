//WAP in C to perform 3D transformation on a triangle. Use the following transformation:
//a) Translation
//b) Scaling
//c) Rotation

#include <graphics.h>
#include <stdio.h>
#include <math.h>


void drawCube(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x4, y4);
    line(x4, y4, x1, y1);
    line(x1, y1, x1 + 50, y1 - 50);
    line(x2, y2, x2 + 50, y2 - 50);
    line(x3, y3, x3 + 50, y3 - 50);
    line(x4, y4, x4 + 50, y4 - 50);
    line(x1 + 50, y1 - 50, x2 + 50, y2 - 50);
    line(x2 + 50, y2 - 50, x3 + 50, y3 - 50);
    line(x3 + 50, y3 - 50, x4 + 50, y4 - 50);
    line(x4 + 50, y4 - 50, x1 + 50, y1 - 50);

        
}

void translate(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){
    int tx, ty, tz;
    printf("Enter the translation factor: \n tx ty tz ");
    scanf("%d %d %d", &tx, &ty, &tz);
    x1 += tx;
    y1 += ty;
    x2 += tx;
    y2 += ty;
    x3 += tx;
    y3 += ty;
    x4 += tx;
    y4 += ty;
    drawCube(x1, y1, x2, y2, x3, y3, x4, y4);
}

void scale(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){
    int sx, sy, sz;
    printf("Enter the scaling factor: \n sx sy sz ");
    scanf("%d %d %d", &sx, &sy, &sz);
    x1 *= sx;
    y1 *= sy;
    x2 *= sx;
    y2 *= sy;
    x3 *= sx;
    y3 *= sy;
    x4 *= sx;
    y4 *= sy;
    drawCube(x1, y1, x2, y2, x3, y3, x4, y4);
}





int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)" ");



    int x1 = 100, y1 = 100, x2 = 200, y2 = 100, x3 = 200, y3 = 200, x4 = 100, y4 = 200;
    drawCube(x1, y1, x2, y2, x3, y3, x4, y4);

    int choice;
    printf("Enter your choice: \n1. Translation \n2. Scaling \n3. Rotation ");
    scanf("%d", &choice);
    switch(choice){
        case 1: translate(x1, y1, x2, y2, x3, y3, x4, y4);
                break;
        case 2: scale(x1, y1, x2, y2, x3, y3, x4, y4);
                break;
        case 3: 
                // drawaxis3d();

                break;
        default: printf("Invalid choice");
    }

    getch();
    closegraph();
    return 0;
}