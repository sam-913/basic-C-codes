#include <stdio.h>
//bitwise operator operations
int main()
{
    unsigned int a = 60; /* 60 = 0011 1100 */
    unsigned int b = 13; /* 13 = 0000 1101 */
    int c = 0;

    /* 12 = 0000 1100 */
    c = a & b;
    printf("Line 1 - Value of c is %d\n", c);

    /* 61 = 0011 1101 */
    c = a | b;
    printf("Line 2 - Value of c is %d\n", c);

    /* 49 = 0011 0001*/
    c = a ^ b;
    printf("Line 3 - Value of c is %d\n", c);

    /*-61 = 1100 0011 */
    c = ~a;
    printf("Line 4 - Value of c is %d\n", c);

    /* 240 = 1111 0000 */
    c = a << 2;
    printf("Line 5 - Value of c is %d\n", c);

    /* 15 = 0000 1111*/
    c = a >> 2;
    printf("Line 6 - Value of c is %d\n", c);

    return 0;

   
}