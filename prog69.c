//WAP to print all the ASCII values and their equivalent characters using a while loop. The ASCII values vary from 0 to 255.
#include <stdio.h>
int main ()
{
    int n=1;
    char c;
    while(n<=255)
    {
        printf("ASCII value of character %c = %d\n", n, n);
        n++;
    }
    return 0;
}