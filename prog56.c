//26nov
#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=5;j>=i;j--)
            printf(" ");
        for (k=1;k<=(2*i-1);k++)
            printf("%d",i);
        for(j=9;j>=(2*i-1);j--)
            printf(" ");
        for (k=1;k<=(2*i-1);k++)
            printf("%d",i);
        printf("\n");
    }
    for(i=1;i<=5;i++)
    {
        for (k=1;k<=i;k++)
            printf(" ");
        for(j=9;j>=(2*i-1);j--)
            printf("%d",(6-i));
        for (k=1;k<=(2*i-1);k++)
            printf(" ");
        for(j=9;j>=(2*i-1);j--)
            printf("%d",(6-i));
        printf("\n");
    }
return 0;
}