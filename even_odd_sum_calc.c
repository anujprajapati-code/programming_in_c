/*WAP to print sum of even and odd numbers from 1 to N numbers*/
#include <stdio.h>
int main()
{
    printf("\t\t\t\tEven or Odd sum program\t\t\t\n");
    int i,N,evensum=0,oddsum=0;
    printf("\n  Enter the value of N: ");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
    if(i%2==0){
        evensum += i;
    }
    else{
        oddsum += i;
    }
    }
    printf("\n\tSum of even numbers: %d",evensum);
    printf("\n\tSum of odd numbers: %d",oddsum);
    printf("\n\n\n\t\t\t\t\t-----\t");
    return 0;
}
