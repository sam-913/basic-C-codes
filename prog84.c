//gcd_2
#include <stdio.h>

int gcd(int n1, int n2) 
{
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}
int main() 
{
    int n1, n2;
    printf("Enter two positive integers: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    int n=gcd(n1, n2);
    printf("G.C.D of %d and %d is %d.", n1, n2, n);
    return 0;
}
