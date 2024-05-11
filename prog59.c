
//palindrome
#include <stdio.h>
int main ()
{
    int n,s=0,m;
    printf("Enter the integer : ");
    scanf ("%d",&n);
    m=n;
    do
    {
        s=s*10+(n%10);
        n=n/10;
    }while (n!=0);
    if (s==m)
    printf ("Palindrome no. : %d",s);
    else
    printf ("Not a Palindrome no. : %d",s);
    return 0;
}