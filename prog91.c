//transpose
#include <stdio.h>
int main() 
{
  int r=0, c=0;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);
  int a[r][c], t,p;
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  {
    for (int j = 0; j < c; ++j) 
  {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }
  }
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  {for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == (c-1))
    printf("\n");
  }}
  int w[10][10];
  for (int i = 0; i < r; ++i)
  { 
      for (int j = 0; j < c; ++j) 
    {
      t = a[i][j];
      p = a[j][i];
      w[i][j] = p;
      w[j][i] = t;
    }
   }
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) 
  {
    printf("%d  ", w[i][j]);
    if (j == (c-1))
    printf("\n");
  }
  return 0;
}