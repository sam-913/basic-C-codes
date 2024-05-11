//L_search_10.12
#include<stdio.h>
int ls(int ar[],int n, int r) //linear search O(n)
{
    int i,c;
    for (i=0;i<n;i++)
        if ((ar[i])==r)
            return i;
    
    return -1;
}
int main ()
{
    int n,b,c;
    printf("Enter the length : ");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nEnter key : ");
    scanf("%d",&c);
    b=ls(a,n,c);
    printf("\n%d is present at index %d ", c,b);
    return 0;
}