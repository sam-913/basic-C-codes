//rev_print
#include<stdio.h>
int main ()
{
    int n,b,c;
    printf("Enter the length : ");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nArray in rev order : ");
    for (int i=(n-1);i>=0;i--)
        printf("%d ",a[i]);
    return 0;
}