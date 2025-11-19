/***WAP to print the square root from 1 to 9.*****/
#include <stdio.h>
#include <math.h>
int main()
{
    double b;
    int a=0;
    printf("The value of a: ");
    scanf("%d",&a);
    while(a<100){
    b=sqrt(a);
    printf("\n\tnumber = %d\n\tsquare root = %f",a,b);
    a++;
    }
    return 0;
}
