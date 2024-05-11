#include <stdio.h>
int main()
{
    int a;
    printf("\n Enter the value of a");
    scanf("%d", &a);
    if(a == 0)
    printf("The vehicle moves with constant velocity");
    else if(a > 0)
    printf("The vehicle moves with accelerated velocity ");
    else
    print("The vehicle moves with decelerated velocity");
    return(0);
}