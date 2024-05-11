//sum of odd nos. without loop
#include <stdio.h>
int main ()
{
    int sum=0, n, count=0, i;
    for (i=0;i<10; i++)
    {   
        printf ( "\nEnter the next number:" ) ;
        scanf ("%d", &n);
        count = count + n % 2;,
        sum = sum + (n%2) * n;
    }
    printf ( "Number of odd numbers = %d and Sum = %d", count, sum) .
    return 0;
}