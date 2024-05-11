//employee structure
#include <stdio.h>
#include <stdlib.h>
 
typedef struct
{
    char name[30];
    char address[100];
    int age;
    double salary;
} Employee;

int main()
{

    int n=3;
    Employee employees[n];
 
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++)
    {
        printf("Employee %d:- \n",i+1);

        
        printf("Name: ");
        scanf("%s",employees[i].name);

        printf("Address: ");
        scanf("%s",employees[i].address);

        printf("Age: ");
        scanf("%d",&employees[i].age);

        printf("Salary: ");
        scanf("%lf",&employees[i].salary);
        
        char ch = getchar();
 
        printf("\n");
    }
    
    double sum=0;
    for(int i=0; i<n; i++)
    {
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Id \t: ");
        printf("%s \n",employees[i].address);

        printf("Age \t: ");
        printf("%d \n",employees[i].age);
 
        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);

        for(i=0; i<n; i++)
        {
           sum+= employees[i].salary;
        }

        double avg=sum/n;
        printf("The average salary is: %.2lf", avg);
 
        printf("\n");
    }
 
    return 0;
}