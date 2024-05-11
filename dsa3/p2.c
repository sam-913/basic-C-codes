//19.7 Q2
//WAP to reverse the contents of an array of n elements.
#include <stdio.h>
int main ()
{
    int n , i;
    printf("\n Enter n:");
    scanf("%d" , &n);
    int a [n], rev[n];
    for (i=0;i<n;i++)
    {
        printf(" Enter array element :");
        scanf("%d", &a[i] );
    }
    for(i=0;i<n;i++)
    {
        rev[i]=a[n-i-1];
    }
    printf("\n On reversing the array elements we get\n");
    for(i=0;i<n;i++) 
    {
      printf("%d \n",rev[i]) ;
    }
    return 0;
}


