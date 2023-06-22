//add first 10 natural numbers using recursion
#include <stdio.h>

int add(int n){
    int sum=0;
    if(n==0){
        return 0;
    }
    else{
        sum=n+add(n-1);
        return sum;
    }

}

int main(){
    int n=10;
    printf("Sum=%d",add(10));
}