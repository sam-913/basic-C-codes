//quadratic func
#include <stdio.h>
#include <math.h>
void roots(int a, int b , int c)
{
    int r1, r2;
    int d= b^2-(4*a*c);
    r1=(-b+sqrt (d)) /2*a;
    r1=(-b-sqrt(d)) /2*a;
    if(d>=0)
        printf("r1= %d, r2= %d", r1, r2); //add the checking condition
    else
        printf ("Not real.");
}
int main ()
{
int x,y, z;
printf("Enter a, b and c:");
scanf("%d%d%d", &x, &y, &z);
roots (x,y,z);
return 0;
}