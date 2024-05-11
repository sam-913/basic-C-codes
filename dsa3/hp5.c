//WAP to sort rows of a matrix having m rows and n columns in ascending & columns in descending order.
#include <stdio.h>
int main()
{
    int a1[10][10], a2[10][10];
    int i, j, k, a, m, n;
    printf("Enter the order of the matrix \n");
    scanf("%d %d", &m, &n);
    printf("Enter the matrix \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &a1[i][j]);
            a2[i][j] = a1[i][j];
        }
    }
    printf("The given matrix is \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
                printf(" %d", a1[i][j]);
        }
        printf("\n");
    }
    printf("Arranging rows in ascending order\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            for (k =(j + 1); k < n; ++k)
            {
                if (a1[i][j] > a1[i][k])
                {
                    a = a1[i][j];
                    a1[i][j] = a1[i][k];
                    a1[i][k] = a;
                }
            }
        }
    }
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf(" %d", a1[i][j]);
        }
        printf("\n");
    }
    printf("Afrranging the columns in descending order \n");
    for (j = 0; j < n; ++j)
    {
        for (i = 0; i < m; ++i)
        {
            for (k = i + 1; k < m; ++k)
            {
                if (a2[i][j] < a2[k][j])
                {
                    a = a2[i][j];
                    a2[i][j] = a2[k][j];
                    a2[k][j] = a;
                }
            }
        }
    }
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf(" %d", a2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
