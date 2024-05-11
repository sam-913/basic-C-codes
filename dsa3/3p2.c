#include<stdio.h>  
#include<stdlib.h>  

struct node  
{  
    int data;  
    struct node *next;  
};  
struct node *head;

void createNode(int item)  
    {  
        struct node *ptr = (struct node *)malloc(sizeof(struct node *));  
        if(ptr == NULL)  
        {  
            printf("\nOverflow\n");
        }  
        else  
        {  
            ptr->data = item;  
            ptr->next = head;  
            head = ptr;  
            printf("\nNode inserted\n");  
        }  
 
    }  
void traverse()  
    {  
        struct node *ptr;     
        ptr = head;   
        if(ptr == NULL)  
        {  
            printf("Empty list");  
        }  
        else  
        {  
            printf("Values are as follows : \n");   
            while (ptr!=NULL)  
            {  
                printf("\n%d",ptr->data);  
                ptr = ptr -> next;  
            }  
        }  
     }
int main ()  
{  
    int c, item;
    do   
    {  
        printf("\n1.Insert Node\n2.Traverse\n3.Exit\n\tEnter your choice:\n");  
        scanf("%d",&c);  
        switch(c)  
        {  
            case 1:   
                printf("\nEnter the element to insert values : \n");  
                scanf("%d",&item);  
                createNode(item);
                break;
            case 2:
                traverse();
                break;
            case 3:  
                exit(0);  
                break;    
            default:  
                printf("\nPlease enter a valid choice.\n");  
        }  
 
    }while(c != 3);  
    return 0;
}