//arr_mid_pointers
#include <stdio.h> 
void sort(int n, int* ptr)
{
    int i, j, t;
    for (i = 0; i < n; i++) {  
        for (j = i + 1; j < n; j++) {  
            if (*(ptr + j) < *(ptr + i)) {  
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
    printf("sorted array : ");
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
    printf("\nMiddle element : %d ", *(ptr+2));
}
int main()
{
    int i,n = 5;
    int arr[5];
    printf("Enter values for array \n");
    for (i=0;i<5;i++)
    {
        printf("Enter value=");
        scanf("%d",&arr[i]);
    }    
    sort(n, arr);  
    return 0;
}