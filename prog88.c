//maxof5array
#include<stdio.h>
int main()
{
  int a[5], i, max, Pos;  
  printf("\nPlease Enter elements of an array: \n");
  for(i=0; i<5; i++)
   {
     scanf("%d",&a[i]);
   }     
  max = a[0];
  for(i=1; i<5; i++)
   {
    if(max<a[i])
    {
       max=a[i];
       Pos = i;
    }   
   }
  printf("\nLargest element in an Array = %d", max);
  printf("\nIndex position of the Largest element = %d", Pos);
  
  return 0;
}