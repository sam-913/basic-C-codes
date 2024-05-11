//WAP to print all prime numbers from 1 to 300.
#include<stdio.h>
int main()
{     
    int j,i,c=0; 
    for (j=1;j<=300;j++)
    {
        c=0;
        for (i=2;i<j;i++)
        {
            if(j%i==0)
                c+=1;
        }
        if (c==0)
            printf ("\nPrime no. : %d",j);
    }
    return 0;
}
