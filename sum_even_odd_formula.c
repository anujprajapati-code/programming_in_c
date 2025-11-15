/*WAP to print sum of even or odd numbers from 1 to N numbers*/
#include <stdio.h>
int main()
{
    printf("\t\t\t\tEven or Odd sum program\t\t\t\n");
    int N,evensum=0,oddsum=0;
    printf("\n  Enter the value of N: ");
    scanf("%d",&N);
    if(N%2==0){
      evensum =(N*(N+2))/4;
      printf("\n\tSum of even numbers: %d",evensum);
    }
    else{
      oddsum =(((N+1)*(N+1))/4);
      printf("\n\tSum of odd numbers: %d",oddsum);
    }
    printf("\n\n\n\t\t\t\t\t-----\t");
    return 0;
}
