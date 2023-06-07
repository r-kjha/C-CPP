/*This is a sample Graphics.h file for VS Code.
Make sure to save graphics code with .cpp extension.
*/

/*Version 1*/
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)" ");

    // graphics code here 

    getch();
    closegraph();
    return 0;
}

/*Version 2*/
/*
#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    char driver[] = " ";
    initgraph(&gd, &gm, driver);


    getch();
    closegraph();
    return 0;
}
*/

/*Version 3*/
/*
#include <stdio.h>
#include <conio.h>
#include <graphics.h>


int main(int argc, char const *argv[]){
 int gd=DETECT,gm;
 initgraph(&gd,&gm, (char*)"");


 

 getch();
 closegraph();
 return 0;

}
*/