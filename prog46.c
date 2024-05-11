//sum of odd nos

#include <stdio.h>
int main ()
{
    int s= 0,n=0,c=0,i;
    for(i=0;i<10;i++)
    {
        printf ("\nEnter number: ");
        scanf (" %d ", &n );
        if (n%2!=0)
        {
            s+=n;
            c++;
        }
    }
    printf("no. of odd nos. = %d and sum = %d ",c,s);
    return 0;
}