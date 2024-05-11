//max_pointers
#include <stdio.h> 
int main()
{
   int x, y, *a, *b ;
   printf("Enter the value of x and y\n");
   scanf("%d%d", &x, &y); 
   a = &x;
   b = &y; 
   if(*a > *b)
    printf("Max no. = %d\n", *a);
   else
    printf("Max no. = %d\n", *b);
   return 0;
}
