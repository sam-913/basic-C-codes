//WAP to arrange the elements of an array such that all even numbers are followed by all odd numbers.
#include<stdio.h>  
int main()  
{  
    int N;    
    printf("Enter the number N : \n");
    scanf("%d" , &N);
    int a[N], i, j = N, temp;  
    printf("Enter integer numbers : \n");  
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);  
  
    for(i = 0; i <= j; i++)  
    {  
        if(a[i] % 2 != 0)  
        {  
            while(j > i)  
            {  
                j--;  
                if(a[j] % 2 == 0)  
                {  
                    temp = a[i];  
                    a[i] = a[j];  
                    a[j] = temp;  
                    break;  
                }  
            }  
        }  
    }  
  
    printf("\nAfter arranging even and odd elements : \n");  
    for(i = 0; i < N; i++)  
        printf("%d\n", a[i]);  
  
    return 0;  
}  