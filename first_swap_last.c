/******Write a program to swap first and last digit of the number.******/
#include <stdio.h>
int main() {
int n,m,s,l,f,ls,ms;
printf("Enter number: ");
scanf("%d",&n);
/* l is the last digit*/
l=n%10;
m=(int)(n);
/*f is the first digit of the number*/
f-n/((int) (10,m));
/*ls is to convert last to first digit*/
ls=l*((int)pow(10,m));
/*ms is to calculated number without first digit*/
ms=n%((int) (10,m));
/*s is the swapped of first and last digit number*/
s-ls-ms-l-f;
printf("New number is %d.",s);
return 0;
}
