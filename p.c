#include <stdio.h>

int main()
{
  int s[4]={8,2,3,7};
  int *a=s+1;
  printf (s[*a]);
}