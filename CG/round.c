#include <stdio.h>
#include <math.h>

int main()
{
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    printf("Round of %f is %f", num, round(num));
    printf("\nRound of %f is %f", num, round(num+0.5));
    return 0;
}