//avg marks & 90+
#include<stdio.h>
int main(){
    int i,avg,count=0,sum=0,mark[10];
    for (i=0;i<10;i++)
    {
        printf("\nEnter marks=");
        scanf("%d",&mark[i]);
    }
    for(i=0;i<10;i++)
    {
        sum+=mark[i];
        if(mark[i]>89)
        count++;
    }
    avg=sum/10;
    printf("\nAverage marks=%d",avg);
    printf("\nNumber of students secured O grade = %d \n",count);
    return 0;
}