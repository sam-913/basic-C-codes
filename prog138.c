#include <stdio.h>
void fib(int sah,int sag)
{
 int a[20];  
 int san1=0,san2=1,san3,sai,sanum=sah;   
  a[0]=san1;
  a[1]=san2;     
 for(sai=2;sai<20;++sai)
 { 
  san3=san1+san2;      
  san1=san2;    
  san2=san3;   
  a[sai]=san3; 
 } 
 int sa_s=0;
 for(int saj=sah;saj<=sag;saj++)
 {
   printf("%d\n",a[saj]);
   sa_s+=(a[saj]);
 }
   printf("Sum = %d", sa_s);
}
int main()
{
  int sam,san;
  sam=(274 % 10) + 1;
  san=(274 %10) + 10;
  fib(sam,san);
  
}
