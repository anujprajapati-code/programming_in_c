/***WAP to read the number from array in reversed order.***/
#include <stdio.h>
int main()
{
    int i;
    int act[7]={1,2,3,4,5,6,7};
    for(i=6;i>=0;i--){
        printf("\n\t The number at act[%d] is %d",i,act[i]);
    }
    return 0;
}
