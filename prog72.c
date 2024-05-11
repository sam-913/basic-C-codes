//
#include<stdio.h>
void display2( int n)
{
    int i;
    char a;
    printf("ENTER CHARACTER TO BE PRINTED : ");
    scanf("%c",&a);
    for(i=0;i<n;i++)
        printf("%c\t",a);
    printf("\n");
}
int main()
{
    display2(30);
    return 0;
}