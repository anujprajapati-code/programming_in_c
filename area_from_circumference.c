/******************************************************************************************
    WAP to calculate the area through circumference of a circle. 
    
*******************************************************************************************/

#include <stdio.h>

int main()
{
    float radius,area,crcf,pie=22/7;
    printf("\t\tCircle's Area through Circumference program\t\t\n");
    printf("\n Circumference of the circle(in m): ");
    scanf("%f",&crcf);
    /*Circumference of the circle = 2*pie*radius;*/
    radius=crcf/(2*pie);
    printf("\n Radius of the circle is %.2f m",radius);
    area=pie*radius*radius;
    printf("\n Area of a cicle is %.2f sqrm",area);
    printf("\n\n\t\t\t\t-------\t\t");
    return 0;
}
