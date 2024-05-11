//wheatstone
#include <stdio.h>

int main()
{
    float P, Q, R, S;
    printf("Enter value of resistance 1 2 3 4:");
    scanf("%f %f %f %f ",&P, &Q, &R, &S);
    if(P*S == R*Q)
    {
        printf("\nThe wheatstone bridge is balenced");}
    else
    {
        printf("Wheatstone bridge is not balenced. ");
        S=R*Q/P;
        printf("\n Choose %f to balence Wheatstone bridge . ", S);
    }
    return(0);
 }
