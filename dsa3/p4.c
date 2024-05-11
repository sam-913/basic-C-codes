//19.7 Q4
//WAP to sort an array of n numbers.
#include <stdio.h>
int main ()
{
    int n , i, j ,t;
    printf("\n Enter n:");
    scanf("%d" , &n);
    int a [n], rev[n];
    for (i=0;i<n;i++)
    {
        printf(" Enter array element :");
        scanf("%d", &a[i] );
    }
    for (i=0;i<n;i++)
    {
        for (j=i;j<n;j++)
        {
            t=0;
            if (a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
        printf(" %d\n", a[i]);
}
