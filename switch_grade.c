/**WAP to show grading system using switch case.**/
#include <stdio.h>
int main() {
    int marks, grade;

    printf("Enter marks (0–100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks!\n");
        return 0;
    }

    grade = marks / 10;
    switch(grade) {
        case 10:   // for 100
        case 9:
            printf("Grade: A\n");
            break;

        case 8:
            printf("Grade: B\n");
            break;

        case 7:
            printf("Grade: C\n");
            break;

        case 6:
            printf("Grade: D\n");
            break;

        case 5:
            printf("Grade: E\n");
            break;

        default:
            printf("Grade: F (Fail)\n");
    }

    return 0;
}
