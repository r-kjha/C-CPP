//tower of hanoi
#include <stdio.h>


void towerOfHanoi(int n, char from_rod, char aux_rod, char to_rod){ 
    if(n==1){ //base case
        printf("Move disk \"1\" from rod %c to rod %c\n", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n-1, from_rod, to_rod, aux_rod); //recursive call to move n-1 disks from source to aux
    printf("Move disk %d from rod %c to rod %c\n",n, from_rod, to_rod); //move nth disk from source to destination
    towerOfHanoi(n-1, aux_rod, from_rod, to_rod); //recursive call to move n-1 disks from aux to destination
}

int main(){
    int n = 3; // Number of disks
    towerOfHanoi(n, 'A', 'B', 'C'); // A, B and C are names of rods
    return 0;
}


