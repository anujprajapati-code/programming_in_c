/** WAP to print the half pyramid using given integer.**/
#include <stdio.h>
int main() {
   int i,j,rows,a;
   printf("Enter the number you have to print: ");
   scanf("%d",&a);
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ",a);
      }
      printf("\n");
   }
   return 0;
}
