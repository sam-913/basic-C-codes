// chk triangle
#include<stdio.h>
int main()
{
    int a, b, c, t;
    printf("Give value of side A: ");
    scanf("%d", &a) ;
    printf("\nGive value of side B: ");
    scanf("%d", &b);
    print("\nGive value of side C: "):
    scanf("%d", &c);
    t = ((a+b)>c + (b+c)›a + (c+a)›b) /3;

    printf( "\n Do they satisfy triangle property? 1 for yes @ for no: %d", t);
    return 0;
}
