//29oct_swapping

#include <stdio.h>

int main ()
{
    int a,b,c;
    printf("Enter a : ");
    scanf ("%d",&a);
    printf("Enter b : ");
    scanf ("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf ("swapped values : %d and %d . ",a,b);
    return 0;
}
