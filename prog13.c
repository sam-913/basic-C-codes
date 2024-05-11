//vol of cylinder_29oct

#include <stdio.h>
#define pi 3.142

int main ()
{
    float r, h ;

    printf("enter radius : ");
    scanf("%f", &r);

    printf("enter height : ");
    scanf("%f", &h);

    float v = 2 * r * h * pi ;
    printf("The volume of the cylinder with r as %f and h as %f is %f . ",r,h,v);
    return 0;
}
