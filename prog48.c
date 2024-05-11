//sum of digits of int
#include <stdio.h>
int main ()
{
    int n,s=0;
    printf("Enter the integer : ");
    scanf ("%d",&n);
    while (n!=0)
    {
        s+=n%10;
        n=n/10;
    }
    printf ("The sum of digits are : %d",s);
}