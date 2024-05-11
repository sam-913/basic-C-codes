//Wap using pointer to  use mallloc than array of score(cricket) of 10 matches of player and find the average score.
#include <stdlib.h> 
#include <stdio.h>
int main()
{
    int *ptr,i,a=0;
    ptr=(int*)malloc(10*sizeof(int));
    printf("Enter scores ");
    for(i=0;i<10;i++)
    {
        scanf("%d",ptr+i);
        a=a + *(ptr+i);
    }
    a=a/10;
    printf("Avg Score : %d",a);
}