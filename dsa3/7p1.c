#include<stdio.h>
#include<stdlib.h>

#define max 100
int stack[max];
int top=0,x;

int empty()  
{
    if(top<=0)
        return 1;
    else
        return 0;
}

void display()
{
    int i;
    i=top-1;
    if(top<=0)
        printf("Stack is Empty :(");
    else
        printf(":)\n  The Elments in the Stack : \n");
    while(i>=0)
    {
        int o = (stack[i--]);
        printf("\t%d\n", o );
    }
}

void push(int x)
{
    if(top>=max)
        printf("\tOVERTFLOW:(\n");
    else
    {
        stack[top]=x;
        top++;
    }
}

int pop()
{
    if(top<=0)
        printf("\tUNDERFLOW :(\n");
    else
    {   
        top--;
        x=stack[top];
    }
    return x;
}

int main()
{
    int ch,item,d;
    char a;
    printf("\n\t\tStack Operations :");
    printf("\n\tMenu ");
    printf("\n\t1.Check for Empty");
    printf("\n\t2.Display Stack");
    printf("\n\t3.PUSH");
    printf("\n\t4.POP");
    a ='Y';

    do
    {
    printf("\n\t Enter Your Choice :)");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
           x=empty();
          if(x==1)
            printf("Stack is Empty :(");
          else
            printf("Stack is Not Empty :)");
          break;
           
    case 2:
           display();
           break;
           
    case 3:
           printf("Enter an Element to PUSH: \n");
           scanf("%d",&item);
           push(item);
           break;
           
    case 4:
           x=pop();
           printf("The element POP out from Stack is %d",x);
           break;
          
    default:
        printf("INVALID Choice :(( \n");
    }

    printf("\n Do you want to continue y/n:  ? ");
    scanf(" %c",&a);
    
    }while(a=='y');

    return 0 ;
}
