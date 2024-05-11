//lab
#include <stdio.h>

struct st
{
    int a;
    char c;
};

int main()
{
    struct st x;
    printf("Numbers in 1st structure ");
    scanf("%d%s",&x.a,&x.c);
    struct st y;
    y=x;
    printf("Numbers are in 2nd structure are : \n");
    printf("%d %c\n",y.a, y.c);
    
    return 0;
}