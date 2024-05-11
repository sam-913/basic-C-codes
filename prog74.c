//3.12 swapping
#include <stdio.h>

void swap (int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf ("After swapping: a: %d and b: %d\n", x, y);
}
int main()
{
    int a, b;
    printf("Enter values for a: ");
    scanf ("%d", &a) ;
    printf( "Enter values for b: ");
    scanf ("%d", &b);
    printf ("Before swapping: a: %d and b: %d\n", a, b);
    swap(a, b);
    return 0;
}