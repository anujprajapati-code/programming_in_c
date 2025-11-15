/********
    WAP that accepts the temperature in
       Centigrade and converts into 
           Fahrenheit 
      using the formula C/5=(F-32)/9.
**********/

#include <stdio.h>

int main()
{
    float c,f;
    printf("\t\tFahrenheit to Centigrade conversion\t\t\t\n");
    printf("\n\tThe Fahrenheit (in degree)is: ");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("\n\tThe Centigrade is %.2f °C.",c);
    printf("\n\n\n\t\t\t\t-----\t\t");

    return 0;
}
