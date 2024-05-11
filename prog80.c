//9.12_fibonacci_20_rucursive
#include <stdio.h>
int fibbonacci(int n) 
{
   if(n == 0)
      return 0;
   else if(n == 1)
      return 1;
   else 
      return (fibbonacci(n-1) + fibbonacci(n-2));
}
int main()
{
    int n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    if(n==0)
        printf("The number of elements is incorrect ");
    printf("Fibonacci series is: \n");
    for(i = 0;i<n;i++) 
    {
      printf("%d ",fibbonacci(i));            
    }
}