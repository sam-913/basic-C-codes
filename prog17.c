// q2 

#include <stdio.h>
int main ()
{
    int a=2,b=3,c=4,d;
    d = a++ + --b - ++c - ++a;
    printf ("%d",d);
    return 0;
} 