#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter %d data : ",n);
    for(int i=0;i<n;i++)
    {
        scanf(" %d",&arr[i]);
    }
    printf("\nEnter the check elements : ");
    int x,y;
    scanf("%d %d",&x,&y);
    int len=n;
    for(int i=0;i<n;i++){
        int count=0;
        if(arr[i]==x){
            for(int j=i+1;j<n;j++)
            {
                count++;
                if(arr[j]==y)
                {
                    if(count<len)
                        len=count;
                    break;
                }
            }
        }
    }
    printf("Minimum distance between %d and %d is %d ",x,y,len);
    return 0;
}