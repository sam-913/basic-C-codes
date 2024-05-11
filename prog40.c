//
#include <stdio.h>
int main()
{
    int x1,x2,y1,y2,x3,y3;
    printf("\nEnter point A:");
    scanf("%d%d",&x1,&y1);
    printf("\nEnter point B:");
    scanf ("%d%d" , &x2,&y2) ;
    printf ("\nEnter point C:");
    scanf("%d%d",&x3,&y3);
    float m1=(y2-y1) /(x2-x1);
    float m2= (y3-y2) /(x3-x2);
    float m3=(y1-y3) /(x1-x3);
    if (m1!=m2 && m2!=m3 && m3!=m1 )
        printf ("\nThe given points form a triangle.");
    else
        printf ("\nThe given points donot form a triangle.");
    return 0;

}