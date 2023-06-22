#include <stdio.h>

void wrong(int n){

    if (n>0){
                printf("%d\n",n);
        wrong(n-1);

    }
}

int main(){
    int n=3;
    wrong(3);
    return 0;
}