/******************************************************************************************
    WAP to calculate the area and circumference of a circle. 
    
*******************************************************************************************/

#include <stdio.h>

int main()
{
    float radius,area,crcf,pie=22/7;
    printf("\t\tCircle's Area and Circumference program\t\t\n");
    printf("\n Radius of a circle(in m): ");
    scanf("%f",&radius);
    area=pie*radius*radius;
    printf("\n Area of a cicle is %.2f sqrm",area);
    crcf=2*pie*radius;
    printf("\n Circumference of th circle is %.2f m",crcf);
    printf("\n\n\t\t\t\t-------\t\t");
    return 0;
}
