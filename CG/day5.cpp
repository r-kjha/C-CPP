/* Bresenhams LDA */

#include <stdio.h>
#include <conio.h>
#include <graphics.h>

//function to draw line using Bresenhams LDA
void drawline(int x0,int y0,int x1,int y1){
    int dx,dy,p,x,y;
    outtextxy(x0,y0,(char*)"* A(x0,y0)");
    outtextxy(x1,y1,(char*)"* B(x1,y1)");
    dx=x1-x0;
    dy=y1-y0;
    x=x0;
    y=y0;
    p=2*dy-dx;
    while(x<x1){
        if(p>=0){
            putpixel(x,y,7);
            y=y+1;
            p=2+2*dy-2*dx;
        }else{
            putpixel(x,y,7);
            p=p+2*dy;
        }
        x=x+1;
        delay(50);
    }
}

int main(){
    int gd=DETECT,gm,x0,y0,x1,y1;
    initgraph(&gd,&gm,(char*)"");

    printf("Enter Values for X0,Y0: ");
    scanf("%d,%d",&x0,&y0);

    printf("Enter Values for X1,Y1: ");
    scanf("%d,%d",&x1,&y1);

    drawline(x0,y0,x1,y1);
    
    getch();
    closegraph();
    return 0;
}