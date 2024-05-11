//Two numbers are entered through the keyboard. 
//WAP to find the value of one number raised to the power of another.

#include <stdio.h>
int main ()
{
    int i,n,s=1,m;
    printf("Enter the base : ");
    scanf ("%d",&n);
    printf("Enter the exponent : ");
    scanf ("%d",&m);
    if(m==0)
        printf("\n%d",1);
    else
    {   for(i=1;i<=m;i++)
          s*=n;
        printf("\n%d",s);    
    }
    return 0;
}