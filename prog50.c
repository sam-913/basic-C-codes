//factorial of int
#include <stdio.h>
int main ()
{
    int n,i;
    long int s=1;
    printf("Enter the number : ");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        s=s*i;
    }
    printf ("Factorial : %ld",s);
    return 0;
}
