#include <stdio.h>

int main()
{
    int n;
    printf("\n Enter n:");
    scanf("%d",&n);
    
    int *p=&n;
    printf("\n  n: %d\n  p: %d", n,(p));
    printf("\n *p: %d", (*p));
    printf("\n &p: %d", (&p));
    return 0;
}