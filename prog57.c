//26nov
#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
            printf(" $");
        for(j=(i);j>=1;j--)
            printf("  ");
        for(j=i;j<=5;j++)
            printf(" $");
        for(j=(i);j>=1;j--)
            printf("  ");
        for(j=i;j<=5;j++)
            printf(" $");
        printf("\n");
    }
    printf(" $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ \n");
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
            printf(" $");
        for(j=1;j<=(i);j++)
            printf("  ");
        for(j=5;j>=i;j--)
            printf(" $");
        for(j=1;j<=(i);j++)
            printf("  ");
        for(j=5;j>=i;j--)
            printf(" $");
        printf("\n");
    }
    return 0;
}