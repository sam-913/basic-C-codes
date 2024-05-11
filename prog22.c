//11.11 slope
#include <stdio.h>
int main ()
{    
    int a,b,c,d;
    float m;
    printf("Enter point 1 : ");
    scanf ("%d,%d",&a , &b);
    printf("Enter point 2 : ");
    scanf ("%d , %d",&c , &d);
    m=(d-b)/(c-a);
    printf("Slope : %f",m);
    return 0;
}
