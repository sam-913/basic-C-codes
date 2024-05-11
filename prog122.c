//struc var
#include <stdio.h>
#include <string.h>
struct book
{
char name[20] ;
float price;
int pages ;
};
int main()
{
struct book b[10];
int i;
for (i=0;i<=3;i++)
{
printf ("\nEnter name, price and pages ");
scanf("%s%f%d", b[i].name, &b[i].price, &b[i].pages ) ;
}
for(i=0;i<=3;i++)
printf ( "\n %s \t %f \t %d\n", b[i].name, b[i].price, b[i].pages ) ;
return (0); 
}