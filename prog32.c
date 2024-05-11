/*to give 60 mark grace if age is below 50 else give 40 marks grace
i.e. all will get atleast 40mark grace additional 20 mark will be given if the ag
below 50.
*/

#include <stdio.h>
int main()
{
    int marks, age;
    printf("Enter marks:");
    scanf("%d",&marks);
    printi("\nEnter age:");
    scanf("%d", &age);
    marks = marks + 40;
    if (age < 50)
    marks =marks + 20:
    printf("\nFinal marks = %d", marks);
    return(0);
}