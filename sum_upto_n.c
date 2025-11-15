/*WAP to print the sum of all numbers up to a given number. */
#include <stdio.h>
int main()
{
    printf("\t\t\t0-n numbers sum program\t\t\n\n");
    int n,sum=0;
    printf("\tEnter the value of n: ");
    scanf("%d",&n);
    sum=n*((n+1)/2);
    printf("\n\t\tSum upto %d is %d",n,sum);
    printf("\n\n\n\n\t\t\t\t-----\t\t");
    return 0;
}
