//exponent
#include<stdio.h>
int rpow(int n1, int n2)
{
    if(n2==0)
        return 1;
    else
        return(n1*rpow(n1,n2-1));
}
int main()
{
    int a,b;
    printf("Enter the num : ");
    scanf("%d",&a);
    printf("Enter the exp : ");
    scanf("%d",&b);
    printf("\n%d to the power %d is %d ", a,b, rpow(a,b));
    return 0;
}