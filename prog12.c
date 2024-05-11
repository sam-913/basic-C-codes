//area_perimeter_circle_29oct

#include <stdio.h>

#define pi 3.142
int main()   
{  
    float radius, area, peri ; 
    printf("Enter radius :");
    scanf ("%f", &radius);
    peri = 2 * pi * radius;
    area = pi * radius * radius;  
    printf("Area of circle : %f . \nPerimeter of circle : %f . \n", area,peri );  
    return 0;  
}   