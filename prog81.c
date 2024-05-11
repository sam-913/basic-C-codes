//sum of digits
#include <stdio.h>
int sod(int n)
{
    return(n/10 ? n%10+sod(n/10) : n);
}
int main( )
{
    int s , a;
    printf("\nEnter a number : ");
    scanf("%d",&a);
    s= sod(a);
    printf("Sum of Digit of %d = %d\n", a, s);
    return 0;
}
