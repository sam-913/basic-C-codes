#include<stdio.h>
struct employee
{
    char name[50];
    int id;
    int salary;
};

void display_structure(char name[], int id, int salary)
{
    printf("Name of Employee: %s\n", name);
    printf("Id of Employee: %d\n", id);
    printf("Salary of Employee: %d\n", salary);
    printf("\n");
}


int main()
{
    struct employee emp = {"SAMRIDDHI ", 2274, 90000};
    display_structure(emp.name, emp.id, emp.salary);

    return 0;
}