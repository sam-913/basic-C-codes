//26nov
#include <stdio.h>
int main()
{
    int i,j,k;
    k=1;
    for(i=7;i>=1;i--)
    {
        for(j=i;j>=1;j--)
            printf(" A");
        for(j=1;j<(k);j++)
            printf("  ");
        for(j=1;j<=i;j++)
            printf(" A");
        for(j=1;j<(k);j++)
            printf("  ");
        for(j=1;j<=i;j++)
            printf(" A");
        k++;
        printf(" \n");
    }
return 0;
}