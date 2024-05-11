#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    char name[30];
    int roll;
    int total;
};

int main()
{
    struct student s[10];
    int i, max = 0, j = 0;
    for (i = 1; i < 4; i++)
    {
        printf("Enter name, roll and total marks of student number %d ", i);
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%d", &s[i].total);
        if (s[i].total > max)
        {
            max = s[i].total;
            j = i;
        }
    }
    printf("Student with highest marks is %s, %d ", s[j].name, s[j].roll);
}