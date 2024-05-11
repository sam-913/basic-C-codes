//12.11pythrm
#include<stdio.h>
int main()
{
    int p,b,h, sp, sb, sh,t;
    printf("Enter the perpendicular: ");
    scanf ("%d" , &p);
    printf("\nEnter the base:");
    scanf("%d",&b);
    printf(" \nEnter the height: ");
    scanf("%d",&h);

    sp-p*p;
    sb=b*b;
    sh=h*h;
    t = ( (sp == (sb + h)) || (sb== (sp+h)) ||| (sh==(sp+sb)) );
    printf("\nThe triangle is right angled if value is 1: %d",t );
    return 0;
}