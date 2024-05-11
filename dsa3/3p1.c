//lab3
//p1
#include<stdio.h>
struct dist
{
  int km; 
  int m; //1km=1000m
};

void add(struct dist dd1,struct dist dd2,struct dist *dd3)
{
  (*dd3).km=dd1.km+dd2.km;
  (*dd3).m=dd1.m+dd2.m;
  if((*dd3).m>=1000)
  {
    (*dd3).km+=((*dd3).m)/1000;
    (*dd3).m = (*dd3).m%1000;
  }
}

int main()
{
  struct dist d1;
  struct dist d2;
  struct dist d3;
  printf("Enter distance for 1st system: ");
  scanf("%d%d",&d1.km,&d1.m);
  printf("\nEnter distance for 2nd system: ");
  scanf("%d%d",&d2.km,&d2.m);
  add(d1,d2,&d3);
  printf("\nAddition of two systems is %d km %d m",d3.km,d3.m);
  return 0;
}