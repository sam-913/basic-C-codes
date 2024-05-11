/*WAP to print the next greater element (NGE) for every
element. The next greater element for an element x is the first greater
element on the right side of x in array. Elements for which no greater
element exist, consider next greater element as -1.*/

#include <stdio.h>

void find(int input[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int next = -1;
        for (int j = i + 1; j < n; j++)
        {
            if (input[j] > input[i])
            {
                next = input[j];
                break;
            }
        }
 
        printf("%d ", next);
    }
}
 
int main()
{
    int n,i ;
    printf("\n Enter n:");
    scanf("%d" , &n);
    int a [n];
    for (i=0;i<n;i++)
    {
        printf(" Enter array element :");
        scanf("%d", &a[i] );
    }
    find(a, n);
 
    return 0;
}
