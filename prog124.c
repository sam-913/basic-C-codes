//book,p,p->op
#include <stdio.h>
#include <stdlib.h>
struct book
{
char name[20];
float price;
int pages ;
};
int main ()
{
struct book *ptr,b[5];
int i;
ptr= b;
for(i=0;i<5;i++)
{
printf ( "\nEnter next book name, price and pages");
scanf ("%s %f %d", (ptr+i)->name, &(ptr+i)->price, &(ptr+i)->pages);
}
for(i=0;i<5;i++)
{
printf("\n%s", (ptr+i)->name);
printf("\n%f", (ptr+i)->price);
printf ( "\n%d", (ptr+i)->pages ) ;
}
return 0;
}