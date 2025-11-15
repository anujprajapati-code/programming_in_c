/***WAP that finds whether given numbers are even or odd.***/

#include <stdio.h>
int main()
{
    printf("\t\t\tEven Odd Check program\t\t\n");
    int a,b;
    printf("\n\tThe value of a: ");
    scanf("%d",&a);
    printf("\n\tThe value of b: ");
    scanf("%d",&b);
    if((a%2==0)&&(b%2==0)){
        printf("\n\t\tBoth a(%d) and b(%d) are even",a,b);
    }
    else if((a%2!=0)&&(b%2!=0)){
        printf("\n\t\tBoth a(%d) and b(%d) are odd",a,b);
    }
    else if((a%2==0)&&(b%2!=0)){
        printf("\n\t\ta(%d) is even and b(%d) is odd",a,b);
    }
    else if((a%2!=0)&&(b%2==0)){
        printf("\n\t\ta(%d) is odd and b(%d) is even",a,b);
    }
    printf("\n\n\n\t\t\t\t------\t\t");
    return 0;
}
