/******************************************************************************
      WAP that accepts the marks of 5 subjects
  and finds the sum and percentage marks obtained 
                by the student.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int math,english,hindi,physics,chemistry,sum; 
    float percentage;
    printf("\t\t\tMarksheet\t\t\t\n");
    printf("\n1\tThe marks in Maths:\t");
    scanf("%d",&math);
    printf("\n2\tThe marks in English:\t");
    scanf("%d",&english);
    printf("\n3\tThe marks in Physics:\t");
    scanf("%d",&physics );
    printf("\n4\tThe marks in Chemistry:\t");
    scanf("%d",&chemistry);
    printf("\n5\tThe marks in Hindi:\t");
    scanf("%d",&hindi);
    sum=math+english+physics+chemistry+hindi;
    printf("\n\t\tTotal marks = %d",sum);
    percentage=(sum*100)/500;
    printf("\n\n\tPercentage = %.2f",percentage);
    printf("\n\n\n\t\t---------\t\t");
    return 0;
}
