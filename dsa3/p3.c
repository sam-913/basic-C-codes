//19.7 Q3
//WAP to search an element in an array of n numbers.
#include <stdio.h>
int main ()
{
    int n , i, x ;
    printf("\n Enter n:");
    scanf("%d" , &n);
    int a [n], rev[n];
    for (i=0;i<n;i++)
    {
        printf(" Enter array element :");
        scanf("%d", &a[i] );
    }
    printf("\n Enter x:");
    scanf("%d" , &x);
    for(i=0;i<n;i++)
    {
        if(a[i] == x)
            break;
    }
    if (i>0 && i<n)
        printf("element found at position : %d\n", (i+1));
    else
        printf ("element not found");
}        
