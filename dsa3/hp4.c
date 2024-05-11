
//WAP to replace every array element by multiplication of previous and next of an n element.
#include<stdio.h> 
void modify(int arr[], int n) 
{ 
    if (n <= 1) 
      return; 
    int prev = arr[0]; 
    arr[0] = arr[0] * arr[1]; 
    for (int i=1; i<n-1; i++) 
    { 
        int curr = arr[i]; 
        arr[i] = prev * arr[i+1]; 
        prev = curr; 
    } 
    arr[n-1] = prev * arr[n-1]; 
} 

int main() 
{ 
    int n ;
    printf("\n Enter n:");
    scanf("%d" , &n);
    int a [n], i;
    for (i=0;i<n;i++)
    {
        printf(" Enter array element :");
        scanf("%d", &a[i] );
    } 
    modify(a, n); 
    for (int i=0; i<n; i++) 
      printf(" %d  ", a[i]); 
    return 0; 
} 