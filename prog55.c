//26nov
#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
            printf(" ");
        for (k=1;k<=(2*i-1);k++)
            printf("$");
        for(j=(2*5-1);j>(2*i-1);j--)
            printf(" ");
        for (k=1;k<=(2*i-1);k++)
            printf("$");
        printf("\n");

    }
    return 0;
}
