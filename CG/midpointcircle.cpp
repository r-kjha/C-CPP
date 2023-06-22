//wap to implement mid point circle generation for drawing circle of given center and radius

/* Algorithm

1. Input the radius r and center (xc, yc) of the circle.
2. Initialize a variable Pk = 5/4 - r.
3. Calculate the first point on the circumference of the circle, i.e. for k = 0, x0 = 0, y0 = r.
4. At each xk position starting from k = 0, perform the following test:
    a. If Pk < 0, the next point along the circle centered at (xc, yc) is (xk+1, yk) and
    Pk+1 = Pk + 2xk+1 + 1.
    b. If Pk ≥ 0, the next point along the circle centered at (xc, yc) is (xk+1, yk-1) and
    Pk+1 = Pk + 2xk+1 + 1 - 2yk-1.
5. Determine symmetry points in the other seven octants of the circle.
6. Move each calculated pixel position (x, y) onto the circular path centered at (xc, yc) and plot the coordinate values (x, y).
7. Repeat steps 4 through 6 until x ≥ y.
8. Stop

*/

#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <direct.h>
// #include <dos.h>

void drawcircle(int xc, int yc, int x, int y) {
    putpixel(xc+x, yc+y, 2);
    putpixel(xc-x, yc+y, 2);
    putpixel(xc+x, yc-y, 7);
    putpixel(xc-x, yc-y, 7);
    putpixel(xc+y, yc+x, 7);
    putpixel(xc-y, yc+x, 7);
    putpixel(xc+y, yc-x, 7);
    putpixel(xc-y, yc-x, 7);
    
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)" ");

    int xc=200, yc=200, r=150, x, y, pk;
    printf("Enter the center of the circle: ");
    scanf("%d %d", &xc, &yc);
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
   

    x = 0;
    y = r;
    pk = 1 - r;

    

    while(x < y) {
        drawcircle(xc, yc, x, y);
        if(pk < 0) {
            x++;
            pk = pk + 2*x + 1;
        }
        else {
            x++;
            y--;
            pk = pk + 2*x + 1 - 2*y;
        }
        drawcircle(xc, yc, x, y);
        delay(100);
        outtextxy(getmaxx()/2
        , getmaxy()-50, (char*) "Mid Point Circle Generation Algorithm");
    }  

    getch();
    closegraph();
    return 0;
}

