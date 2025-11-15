/***WAP that tells whether a given year is a leap year or not.***/

#include <stdio.h>
int main()
{
    printf("\t\t\tLeap year program\t\t\n");
    int year;
    printf("\n\tThe year is: ");
    scanf("%d",&year);
    if((year%4==0&&year%100!=0)||(year%400==0)){
        printf("\n\t%d is a leap year",year);
    }
    else{
        printf("\n\t%d is not a leap year",year);
    }
    printf("\n\n\n\t\t\t\t------\t\t");
    return 0;
}
