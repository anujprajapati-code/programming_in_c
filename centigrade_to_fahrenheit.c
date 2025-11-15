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
    printf("\t\t\tCentigrade to Fahrenheit conversion\t\t\t\n");
    printf("\n\tThe centigrade (in degree)is: ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("\n\tThe Fahrenheit is %.2f °F.",f);
    printf("\n\n\n\t\t\t\t\t-----\t\t");

    return 0;
}
