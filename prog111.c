//coping string 13.1.22
#include<stdio.h>
int main()
{
    char i=0, src[100], dst[100];
    printf("Enter source string : ");
    scanf("%s", src);
    while (src[i] != '\0' )
        dst[i]=src[i++];
    printf("\n Destination String: %s\'\n", dst);
    return 0;
}
