/********WAP that swaps values of two variables using a third variable.*********/
#include <stdio.h>
int main(){
    int a,b,temp;
    printf("\t\tSwaping two value program\t\t\n");
    printf("\n Value of a : ");
    scanf("%d",&a);
    printf("\n Value of b : ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("\n After Swaping the values\n\t a becomes %d \n\tand b becomes %d",a,b);
    printf("\n\n\t\t\t-------\t\t");
    return 0;
}
