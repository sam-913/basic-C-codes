//prime
#include <std.io>
int main()
{
    int n, i,c=0; 
    printf("Enter the number : ");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    if (c==0)
    printf ("Prime no. : %d",n);
    else 
    printf ("Not a Prime no. : %d",n);
    return 0;
}
