/***WAP of array to assign and read the value in reverse order.***/
#include <stdio.h>
int main()
{
    int i;
    int act[i];
    for(i=0;i<7;i++){
        printf("\n\t The number at act[%d] is: ",i);
        scanf("%d",&act[i]);
    }
    for(i=6;i>=0;i--){
        printf("\n\n\t The number at act[%d] is %d",i,act[i]);
    }
    return 0;
}
