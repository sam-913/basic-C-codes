//
#include <stdio.h>
#include <string.h>
struct student{
   int id;
   char name[50];
   float percentage;
   char temp;
};
void structure_demo(int id,char name[],float percentage){
   printf(" Id is: %d \n", id);
   printf(" Name is: %s \n", name);
   printf(" Percentage is: %.2f \n",percentage);
}
struct student r; 
int main(){
   r.id=1;
   strcpy(r.name, "Samriddhi ");
   r.percentage = 85;
   structure_demo(r.id,r.name,r.percentage);
   return 0;
}