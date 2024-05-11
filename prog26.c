//12.11 trianglesum
#include «stdio.h>
int main( )
{
    int n, b, c, t, s;
    printf("Give value of side A:");
    scanf("%d", &a);
    printf(" \nGive value of side B:"):
    scanf("%d", &b);
    printi("\nGive value of side C.");
    scanf("%d", &c);
    t = ((a + b) > c) && (b + c) > a) && ((c+ a) > b) ;
    s= t* (a+ b + c);
    printf(" \nDo they satisfy triangle property?");
    printf(" Display: O for No, sum of all sides for Yes: %d", s);
    return (0);
}
