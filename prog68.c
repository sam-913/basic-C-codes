
//WAP to find the factorial value of any number entered through the keyboard.
#include <stdio.h>
int main ()
{
    int n,i;
    printf("\nEnter number: ");
    scanf("%d",&n);
    long int s=1;
    for (i=1;i<=n;i++)
        s=s*i; 
    printf ("\nFactorial of %d is : %ld ",n ,s);
    return 0;
}