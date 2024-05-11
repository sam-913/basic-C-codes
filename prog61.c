// convert decimal to binary
#include <stdio.h>
int main() {
  int n, m;
  printf("Enter a decimal number: ");
  scanf("%d", &n);
  long bin = 0;
  int rem, i = 1;
  m=n;
  while (n!=0) 
  {
    rem = n % 2;
    n/= 2;
    bin += rem * i;
    i*= 10;
  }
  printf("%d in decimal =  %ld in binary", m, bin);
  return 0;
}
