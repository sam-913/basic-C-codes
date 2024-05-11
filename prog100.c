//prog100.c
#include <stdio.h>

int main()
{
    int a[5],i,negative=0,positive=0;
    for(i = 0 ; i<5 ; i++)
    {
        printf("Enter the %d number: ", i+1);
        scanf("%d", &a[i]);
    }
    for(i = 0; i<5; i++)
    {
        if(a[i] >= 0  )
        {
            positive++;  
        }
        if(a[i] < 0)
        {
            negative++;
        }
    }
    printf("Number of positive integer present in array: %d\n", positive);
    printf("Number of negative integer present in array: %d\n", negative);
    

    return 0;
}