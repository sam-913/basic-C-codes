/*Let A be nXn square matrix array. WAP by using appropriate user defined functions for the following:
a) Find the number of nonzero elements in A
b) Find the sum of the elements above the leading diagonal.
c) Display the elements below the minor diagonal.
d) Find the product of the diagonal elements.*/

#include <stdio.h>

void finda(int n, int a[n][n] )
{
    int i,c=0,j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
                continue;
            else
                c++;
        }
    }
    printf("The no. of non-zero numbers : %d \n", c);
}

 
 void findb(int n , int a[n][n] )
{
    int i,j,s=0;
    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            if(j>i)
            {
                s+=a[i][j];
            }
        }
    }
    printf("\nSum of elements above the leading diagonal = %d.\n",s);
}

 void findc(int n , int a[n][n] )
{
    int i,s=1;
    for(i=0;i<n;++i)
    {
        s*=(a[i][i]);
    }
    printf("\nProduct = %d\n", s );
}

void findd(int n , int a[n][n] )
{
    int i,j;
    
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (j >= (n - i) && j < n)
            {
                printf ("%d ", a[i][j]);
            }
        }
        printf("\n");
    }

}



int main()
{
    int r,j,i ;
    printf("Enter number of Rows :");
    scanf("%d",&r);
    int a[r][r];
    printf("\nEnter matrix elements :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe matrix elements :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
            printf("  %d ",a[i][j]);
        printf("\n");
    }
    finda(r , a );
    findb(r , a );
    findc(r , a);
    findd(r , a );
    return 0;
}

