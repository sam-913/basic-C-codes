//external storage class_global and local variables_15.1.22
#include <stdio.h>
int x = 21;
void disp()
{
int x = 22;
printf ( "\n%d", x) ;
}
int main( )
{
disp();
printf ("\n%d", x);
return 0;
}