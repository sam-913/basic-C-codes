//9.12_rec_max

#include <stdio.h>

int find_max (int n)
{
    int m, l=0, i;
    for (i=1; i<n; i++)
    {
        printf("\nEnter Number: ");
        scanf("%d", &m);
        if(m > l)
            l=m;
    }
    return (l);
}
int main ()
{
    int a,b;
    printf("\nEnter value of n :");
    scanf("%d", &a);
    b = find_max (a);
    printf("\nThe max no. is : %d",b);
    return 0;
}