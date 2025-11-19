/****WAP to print the number in reversed order.****/
#include <stdio.h>
int main()
{
    int n,rev=0,r;
    printf("\tThe value of n: ");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    printf("\n\tThe reversed order of given number's digit is %d",rev);
    return 0;
}
