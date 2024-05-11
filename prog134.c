//read contents of a file, store it onto an array and find sum of the elements
#include <stdio.h>
int main()
{
FILE *fp;
int a[10], sum = 0, i;
fp = fopen("d.in","r");
for (i = 0;i<10;i++)
{
    fscanf(fp,"%d", &a[i]);
    sum += a[i];
}
printf("Sum= %d",sum);
for (i = 9;i>= 0;i--)
    printf("\n%d", a[i]);
fclose(fp);
return 0;
}