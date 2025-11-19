/****WAP to find the number is palindrome or not.****/
#include <stdio.h>
int main()
{
    int n,rev=0,r,temp;
    printf("\tThe value of n: ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    //printf("\n\tThe reversed order of given number's digit is %d",rev);
    if(temp==rev){
        printf("\n\t The number %d is a Palindrome.",temp);
    }
    else{
        printf("\n\t The number %d is not a Palindrome.",temp);
    }
    return 0;
}
