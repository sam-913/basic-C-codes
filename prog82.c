//gcd_3
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
    int n1, n2,n3;
    printf("Enter three positive integers: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    int n=gcd(n1, n2);
    printf("G.C.D of %d , %d and %d is %d.\n", n1, n2, n3 , gcd(n, n3));
    return 0;
}
