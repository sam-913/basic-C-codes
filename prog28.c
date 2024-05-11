//12.11 slope90
#include<stdio.h>
int main()
{
    int x1,y1,x2, y2, x3, y3, ×4, y4, m1, m2, t;
    printf("Enter the coordinates of 1st line: x1 y1 x2 v2: "):
    scanf("%a %d %a %d", &x1, &y1, &x2, &y2) ;
    printf(" nEnter the coordinates of 2nd line: x3 v3 x4 y4: ") ;
    scanf("% %d %d %d", &×3, &y3, &x4, &y4) ;
    m1=(v2- V1) / (x2- x1);
    m2= (y4- y3) / (x4 - x3);
    t = m1 *m2 *-1;
    printf(" The lines are perpendicular : %d",t):
    return 0;
}