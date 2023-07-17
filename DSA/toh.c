//tower of hanoi
#include <stdio.h>


void towerOfHanoi(int n, char from_rod, char aux_rod, char to_rod){
    if(n==1){
        printf("Move disk \"1\" from rod %c to rod %c\n", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n-1, from_rod, to_rod, aux_rod);
    printf("Move disk %d from rod %c to rod %c\n",n, from_rod, to_rod);
    towerOfHanoi(n-1, aux_rod, from_rod, to_rod);
}

int main(){
    int n = 3;
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}


