//area of a circle
#include <stdio.h>
void area()
{
    float area_circle;
    float rad;
    
    printf("\nEnter the radius: ");
    scanf("%f", &rad);
    area_circle=3.14*rad*rad;
    printf("Area of the circle: %f", area_circle);
}

//prototype declaration
void area();

int main()
{
    area();
    return 0;
}