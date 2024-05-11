//lab2.p1
#include <stdio.h>

int main ()
{
  int n;
  printf ("\nEnter n :");
  scanf ("%d", &n);
  int a[n],i;

  printf ("\nInput the array elements :");
  for (i = 0; i < n; i++)
      scanf ("%d", a + i);

  printf ("\nElements entered :\n");
  for (i = 0; i < n; i++)
      printf ("%d\n", *(a + i));

  return 0;
}