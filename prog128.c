//Allocate & assign dynamically 2D Array ([ n][51 ) where column size
//is fixed to 5 to a pointer and find sum of all elements.
#include <stdlib.h> 
#include <stdio.h>
int main()
{
int n, i, j, sum =0 ;
int (*a) [5];
printf("Enter number of rows: ");
scanf("%d",&n);
a = (int (*)[5]) malloc(n * 5 * sizeof(int));
for(i= 0; i<n; i++)
for (j=0; j<5; j++)
{
scanf("%d",&a[i][j]);
sum+= a[i][j] ;
}
return 0;
}