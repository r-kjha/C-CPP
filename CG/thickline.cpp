//wap in c to draw a line with thickness using formula (thickness-1)*sqrtroot((x2-x1)^2+(y2-y1)^2))


#include<stdio.h>

#include<graphics.h>

#include<math.h>

void thickline(int x1,int y1,int x2,int y2,int thickness)

{

int i;

float x,y;

float m=(y2-y1)/(x2-x1);

float c=y1-m*x1;

float d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));

for(i=0;i<thickness;i++)

{

x=x1+(i/sqrt(1+pow(m,2)));

y=m*x+c;

putpixel(x,y,WHITE);

}

for(i=0;i<thickness;i++)

{
    