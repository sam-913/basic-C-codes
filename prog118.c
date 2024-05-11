//compare _STRINGS
#include <stdio.h>  
#include<string.h>  

int string_compare(char s1[], char s2[])
{
int c = 0, flag = 0,p=0;
while (s1[c] == s2[c])
{
if (s1[c] == '\0' || s2[c] == '\0')
break;
else
c++;
++p;
}
if (s1[c] == '\0' && s2[c] == '\0')
{
flag = 1;
++p;
return 0;
}
else
{
    if(flag == 0)
    ++p;
{
if (s1[c]>s2[c])
printf("String 1 is greater than string 2,\n difference at position %d\n", p);
else
printf("String 2 is greater than string 1,\n difference at position %d\n", p);
}
return -1;
}
}

int main()
{
char str1[20];   
char str2[20]; 
int l1=0,l2=0;
printf("Enter the first string : ");  
scanf("%s",str1);  
printf("Enter the second string : ");  
scanf("%s",str2);      
while(str1[l1] != '\0')
        ++l1;
while(str2[l2] != '\0')
        ++l2;
if (l1 == l2)
{
    if (string_compare(str1,str2) == 0)
        printf("The strings are equal.\n");
    else
        printf("The strings are not equal.\n");
}
else
    printf("The length of strings are not equal.\n");
}