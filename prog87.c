//sumarraynos
#include<stdio.h>

int main()
{
 int Size, i, a[10];
 int Add = 0;
 printf("\nEnter the Size of the Array\n");
 scanf("%d", &Size); 
 printf("\nEnter the Array Elements\n");
 for(i = 0; i < Size; i++)
  {
      scanf("%d", &a[i]);
  } 
 for(i = 0; i < Size; i ++)
 {
      Add = Add + a[i]; 
 }  
 printf("Sum of All Elements in an Array = %d ", Add);
 return 0;
}