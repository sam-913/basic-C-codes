//19.7 Q1
#include <stdio.h>

int main()
{
    int n;
    printf("\n Enter n:");
    scanf("%d",&n);
    
    int a[n];
    int i,max,min;
    
    printf("\n Enter array elements:");
    
    for(i=0;i<n;i++)
    {
        printf("\n element at index [%d] : ",i );
        scanf("%d",&a[i]);
    }
    
    max=min=a[0];
    
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        
        if(a[i]<min)
            min=a[i];
        
    }
    printf("\nLargest element in an Array = %d", max);
    printf("\nSmallest element in an Array = %d", min);
    
    return 0;
}