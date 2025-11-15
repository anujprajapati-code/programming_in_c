/**WAP to find the factorial of a given number. **/
#include <stdio.h>
int main()
{
    printf("\t\t\t\tFactorial program\t\t\n");
    long long n,fact=1,i;
    printf("\n\tEnter the number: ");
    scanf("%lld",&n);
    if(n<0){
        printf("\n\tgiven number is negative");
    }
    else{
    for(i=n;i>=1;i--){
        fact *=i;}
    printf("\n\tFactorial of %lld is %lld",n,fact);}
    printf("\n\n\n\n\t\t\t\t\t-----");
    return 0;
}
