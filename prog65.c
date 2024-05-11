/*Write a menu driven program which has following options:
1. Factorial of a number.
2. Prime or not
3. Odd or even
4. Exit     */

#include<stdio.h>
int main()
{     
    int n , c , i , j; 
    printf("Choose a number from the following options:\n1. Factorial of a number.\n2. Prime or not\n3. Odd or even\n4. Exit\n");
    printf("\nEnter choice : ");
    scanf("%d",&c);
    switch (c) 
    {
    case 1:
        printf("Choice is 1 : Displays factorial of number.");
        printf("\nEnter number: ");
        scanf("%d",&n);
        long int s=1;
        for (i=1;i<=n;i++)
            s=s*i; 
        printf ("\nFactorial of %d is : %ld ",n ,s);
        break;
    case 2:
        {
        printf("\nChoice is 2 : Displays if number is prime or not. ");
        c=0; 
        printf("\nEnter number: ");
        scanf("%d",&n);
        for (i=1;i<=n;i++)
        {
            if(n%i==2)
                c++;
        }
        if (c==0)
            printf ("\nPrime no. : %d",n);
        else 
            printf ("\nNot a Prime no. : %d",n);
        break;
        }
    case 3:
        {
        printf("Choice is 3 : check if number is even or odd.");
        printf("\nEnter number: ");
        scanf("%d",&n);
        if (n%2==0)
        printf("Even number %d", n);
        else 
        printf ("Odd number %d",n);
        break;
        }
    case 4:
    {
        printf("Choice is 4 : Exit.");
        break;
    }
    default:
    {
        printf("Wrong Choice !!! ");
        break;
    }
    return 0;
}
