//prllines
#include<stdio.h>
int main()
{
    int x1,y1,x2, y2, ×3, y3, ×4, y4, m1,m2, t;
    printf ("Enter the coordinates of 1st line: x1 y1 x2 y2: ");
    scanf ("%d %d %a %d", &x1, &y1, &x2, &y2);
    printf("\nEnter the coordinates of 2nd line: x3 y3 x4 y4: ");
    scanf ("%d %d %a %d", &×3, &y3, &×4, &y4);
    m1=(v2 - y1) / (x2- x1);
    m2=(v4- V3) / (x4- X3);
    t= p1=-m2;
    printf("InThe lines are parallel if the value is 1: %d",t);
    return 0;
}