//largest in row
#include <stdio.h>
int l_f(int m, int n ,int arr[m][n])
    {
    int i = 0, j;
    int max = 0;
    int res[m];
    while (i < m)  
    {
       for ( j = 0; j < n; j++)
       {
           if (arr[i][j] > max)
           {
              max = arr[i][j];
           }
        }
        res[i] = max;
        max = 0;
        i++;
    }
    max=res[0];
    for(int i = 0; i < m; i++)  
    {
       printf("Largest element in row %d is %d\n", i, res[i]);
       if (max<res[i])
        max=res[i];
    }
    return max;
}
int main()
{
    int m,n;                 
    printf("Enter the number of rows and column: \n");
    scanf("%d %d",&m,&n);   
    int arr[m][n];        
    printf("\nEnter the elements of the matrix: \n");
    for(int i=0;i<m;i++)    
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe elements in the matrix are: \n");
    for(int i=0;i<m;i++) 
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int max = l_f(m, n, arr);
    printf("Largest element is %d\n", max);
    return 0;
}