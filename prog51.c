//sum of nos. divisible by 3
#include <stdio.h>
int main ()
{
    int n,i,z=0,j;
    for (i=1;i<=100;i++)
    {
        n=i;
        if(n%3==0)
            z+=n;
    }
    printf ("The sum : %d",z);
    return 0;
}