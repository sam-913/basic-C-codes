//1d_+-oddevn
#include <stdio.h>
int main( )
{
 int n, i, a[5];
 int Add = 0;
 printf("\nEnter the Array Elements\n");
 for(i = 0; i < 5; i++)
  {
    scanf("%d", &a[i]);
  } 
  for(i = 0; i < 5; i++)
  {
    if (&a[i] > 0)
        printf("\nPositive ");
    else
        printf("\nNegetive ");   
    if (( a[i]%2) == 0)
        printf("Even No.: %d",a[i]);
    else
        printf("Odd No.: %d",a[i]);
  } 
  printf("\n");
  return 0;
}
  
 