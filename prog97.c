//reversed
#include <stdio.h>
int main() 
{
  int a[5][5], t, r, c,m = 0;
  printf("Enter rows and columns : ");
  scanf("%d %d", &r, &c);
  printf("\nEnter matrix elements : \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) 
  {
    printf("Enter element a%d%d : ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }
  m= a[0][0];
  printf("\nEntered matrix : \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) 
  {
    printf("%d  ", a[i][j]);
    if (j == (c-1))
    printf("\n");
  }
  printf("\nReversed matrix : \n");
  for (int i = 0; i < r; ++i)
  {
  for (int j = (c-1); j >= 0; --j) 
    printf("%d  ", a[i][j]);
    printf("\n");
  }
  return 0;
}
  