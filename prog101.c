//displays sum_pointers on 6.1.22
 
#include <stdio.h>
int main()
{
    int n,m, sum;
    int *p1, *p2;
    printf("Enter any two Number: ");
    scanf("%d%d", &n, &m);
    p1 = &n;
    p2 = &m;
    sum = *p1 + *p2;
    printf("\nSum of %d and %d is %d\n", *p1, *p2, sum);
    return 0;
}