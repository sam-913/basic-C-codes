//wap to convert lower case to upper case character
#include <stdio.h>
int lowerToUpper()
{
    char ch;
    printf( "Enter any character: ");
    scanf("%c", &ch);
    if(ch>=65 && ch<=90)
        return ch;
    else
        return(ch-32);
}
int main ()
{
    int a;
    a=lowerToUpper();
    printf ("%c",a);
    return 0;
}
