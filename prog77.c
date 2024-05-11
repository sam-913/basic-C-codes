//9.12_rec_leader
#include <stdio.h>
#include <math.h>
int count_leader (int n )
{
    int m, leader=0, i, c=0 ;
    for (i=1; i<=n; i++)
    {
    printf("\nEnter number: ");
    scanf("%d", &m);
    if( m > leader)
    {
        leader=m;
        c++;
    }
    }
    return (c);
}
int main ()
{
    int a,c;
    printf("\nEnter value of n :");
    scanf("%d", &a);
    c = count_leader (a);
    printf("\nThe count of leaders is : %d",c);
    return 0;
}