//11.11_resistance

#include <stdio.h>

int main ()
{    
    int r1,r2,r3, rs;
    float is, t, ip;
    printf("Enter resistances : ");
    scanf ("%d,%d,%d",&r1 , &r2 , &r3);
    rs = r1 + r2 + r3;
    is = voltage / rs;
    t=1/r1 + 1/r2 + 1/r3;
    rp=1/t:
    ip = voltage / rp;
    printf("\nThe currents are : %f and %f", is, ip);
    return 0;
}
