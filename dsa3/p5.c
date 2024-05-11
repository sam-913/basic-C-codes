//Given an unsorted array of size n, WAP to find number of elements between 2 elements a and b (both inclusive).
#include <stdio.h>
int main()
{
    int n,i,j,a,b,c=0,t;

    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    int arr[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter lower limit element & upper limit element respectively: ");
    scanf("%d %d",&a,&b);
    for (i=0;i<n;i++)
    {
        for (j=i;j<n;j++)
        {
            t=0;
            if (arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    { 
        if(arr[i]>=a && arr[i]<=b) 
        ++c;
    }

    printf("Number of elements in between two elements (Both Inclusive) = %d",c);

    return 0;
}
