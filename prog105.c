//arr_exmpl_pointers
#include <stdio.h> 
int main()
{
    int i,sum=0,arr[5]={2,4,6,8,0};
    int *ptr;
    ptr=arr;
    for(i=0;i<5;++i)
    sum+= *(ptr+i);
    printf("Sum=%d",sum);
    return 0;
}