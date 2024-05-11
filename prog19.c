//29oct_v&h

#include <stdio.h>

#define g 9.8
#define pi 3.14

int main ()
{
    float u, t;
    printf("Enter u : ");
    scanf("%f",&u);
    printf("Enter t : ");
    scanf("%f",&t);
    float v= u + g*t;
    float s=u * t +0.5 * g * t * t ;
    printf ("v = %f \ns = %f",v,s );

    return 0 ;
} 


