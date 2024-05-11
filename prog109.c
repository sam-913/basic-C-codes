#include<stdio.h>
void fact(int *a,int *p)
{
    while(*a>1)
        {
        *p*=*a;
        *a=*a-1;
        }
}
int main()
{
    int num, factorial=1 , c , *p;
    p=&factorial;
    printf("please enter a number:");
    scanf("%d",&num);
    fact(&num,p);
    printf("factorial : %d\n",*p);
    return 0;
}