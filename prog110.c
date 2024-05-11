//palindrome
#include<stdio.h>
int pali(int *ptr)
{
    int t,r,sum;
    t = *ptr;
    while(*ptr>0){
        r = *ptr%10;
        sum = (sum*10)+r;
        *ptr = *ptr / 10;
    }
    if(t == sum)
        printf("palindrome no. \n");
    else
        printf("not palindrome no. \n");
    return 0;
}
int main()
{
    int n;
    printf("Enter the num: ");
    scanf("%d",&n);
    pali(&n);
    return 0;
}