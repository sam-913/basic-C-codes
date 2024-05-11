//Find the Largest Element and store it in the Oth position
#include <stdlib.h> 
#include <stdio.h>
int main()
{
int i=0, n;
float *data;
printf(" Enter total number of elements(1 to 100): ");
scanf("%d",&n);
data=(float *)calloc(n, sizeof(float)); 
printf("\nEnter Number %d: ", i+1);
for(i=1; i<n; i++)
    scanf("%f", data+i);
for(i=1; i<n; i++)
    if(*data <*(data+i))
        *data = *(data+i);
printf("Largest element = %.2f", *data);
free (data);
return 0;
}