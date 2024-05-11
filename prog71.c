//3.12_BASIC FUNCTION PRG
#include<stdio.h>
void display(int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("=");
    printf("\n");
}
int main()
{
    display(10);
    return 0;
}