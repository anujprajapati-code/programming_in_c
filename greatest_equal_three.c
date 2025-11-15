/**WAP that first checks whether user-entered numbers are equal, and then finds the greatest among three given numbers.**/
#include <stdio.h>

int main()
{
    printf("\t\t\tGreatest of three program\t\t\n ");
    float a,b,c;
    printf("\n\tThe value of a: ");
    scanf("%f",&a);
    printf("\n\tThe value of b: ");
    scanf("%f",&b);
    printf("\n\tThe value of c: ");
    scanf("%f",&c);
    printf("\n\t Result = ");
    if(a==b&&b==c){
        printf("\n\t\t(a = b = c)all are equal");
    }
    else if(a>b&&a>c){
        printf("\n\t\t%f(a) is greatest",a);
    }
    else if(b>c&&b>a){
        printf("\n\t\t%f(b) is greatest",b);
    }
    else if(c>a&&c>b){
        printf("\n\t\t%f(c) is greatest",c);
    }
    else if(a==b||b==c){
        printf("\n\t\tTwo numbers are equal and greatest( %f)",b);
    }
    else{
        printf("\n\t\tinvalid value");
    }
    printf("\n\n\n\t\t\t\t-----\t\t");
    return 0;
}
