//9.12_factorial
#include <stdio.h>
int factorial(int n);
int main()
{
    int a, fact;
    printf ( "\nEnter a number : " ) ;
    scanf ( "%d", &a) ;
    fact = factorial (a) ;
    printf ( "Factorial value = %d", fact) ;
    return 0;
}
int factorial(int n)
{    return (n==1? 1: n* factorial(n-1));
}

