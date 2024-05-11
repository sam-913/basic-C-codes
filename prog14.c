//c to f_29oct

#include <stdio.h>
int main()
{
    float c ;
    printf("Enter temperature in celcius : ");
    scanf("%f",&c);
    float f = (c*9/5)+32;
    printf (" the temperature %f degrees in C is equivalent to %f degrees in F . ",c,f);
    return 0;
}
