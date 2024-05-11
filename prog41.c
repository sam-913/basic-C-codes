//marks
#include <stdio.h>
int main()
{
    int p, c, m, e, b, per;
    printf ("Enter marks in five subjects");
    scanf ("%d %d %d %d %d", &p, &c, &m, &e,&b);
    per = (int) (p + c+ m+ e+ b + 4.9) / 5;
    if (per >= 60) 
        printf ("First division");
    if ( (per >= 50 ) && (per < 60 ) ) 
        printf ("Second division");
    if ((per >= 40 ) && (per <50)) 
        printf ("Third division");
    if (per < 40)
        printf("Fail");
    return 0;
}