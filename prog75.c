//prime range func
#include <stdio.h>
void pr(int x, int y)
{
    int i,j,c=0;
    for(i=x;i<=y;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                c++;
        }
        if (c==2)
            printf("\n%d is a Prime no.",i);
    }
}
int main ()
{
    int a,b;
    printf("Enter starting range : ");
    scanf("%d",&a);
    printf("Enter ending range : ");
    scanf("%d",&b);
    pr(a,b);
    return 0;
}