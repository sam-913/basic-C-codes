//swap_pointers
#include <stdio.h> 
int main()
{
   int x, y, *a, *b ;
   printf("Enter the value of x and y\n");
   scanf("%d%d", &x, &y);
   printf("Before Swapping\nx = %d\ny = %d\n", x, y); 
   a = &y;
   b = &x; 
   printf("After Swapping\nx = %d\ny = %d\n", *a, *b);
   return 0;
}
