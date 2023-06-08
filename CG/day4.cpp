//wap in c to draw a line using digital differential analyzer

#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)" ");

    int x1, y1, x2, y2;
    printf("Enter the value of x1 and y1: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the value of x2 and y2: ");
    scanf("%d %d", &x2, &y2);

    

    int dx = x2 - x1;
    int dy = y2 - y1;
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    float xinc = dx / (float)steps;
    float yinc = dy / (float)steps;
    
    float x = x1;
    float y = y1;
    for (int i = 0; i < steps; i++) {
        putpixel(x, y, WHITE);
        x += xinc;
        y += yinc;
        delay(100);
    }





    getch();
    closegraph();
    return 0;
}