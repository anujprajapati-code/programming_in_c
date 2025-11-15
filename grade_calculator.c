/***WAP that accepts marks of five subjects and finds percentage and prints grades according to the following criteria: 
Between 90-100%--------------Print ‘A’ 
80-90%----------------------------Print ‘B’ 
60-80%---------------------------Print ‘C’ 
Below 60%----------------------Print ‘D’ ***/

#include <stdio.h>
int main()
{
    printf("\t\t\t\t\t Marksheet \t\t\n");
    char n[50];
    int roll,std;
    printf("\n  Name of the student: ");
    scanf("%49s",n);
    printf("  Roll number: ");
    scanf("%d",&roll);
    printf("  Standard : ");
    scanf("%d",&std);
    float math,english,chemistry,physics,hindi,sum,percentage;
    printf("\n\tMarks of Maths: ");
    scanf("%f",&math);
    printf("\tMarks of English: ");
    scanf("%f",&english);
    printf("\tMarks of Chemistry: ");
    scanf("%f",&chemistry);
    printf("\tMarks of Physics: ");
    scanf("%f",&physics);
    printf("\tMarks of Hindi: ");
    scanf("%f",&hindi);
    sum=math+english+chemistry+physics+hindi;
    printf("\n\tTotal Marks = %.2f",sum);
    percentage=sum*100/500;
    printf("\tPercentage = %.2f",percentage);
    if((percentage>=90)&&(percentage<=100)){
        printf("\n\tStudent get Grade 'A'");
    }
    else if((percentage>=80)&&(percentage<90)){
        printf("\n\tStudent get Grade 'B'");
    }
    else if((percentage>=60)&&(percentage<80)){
        printf("\n\tStudent get Grade 'C'");
    }
    else{
        printf("\n\tStudent get Grade 'D'");
    }
    printf("\n\n\n\n\t\t\t\t\t------\t\t");
    return 0;
}
