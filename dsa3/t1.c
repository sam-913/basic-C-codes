#include <stdio.h>  
#include<stdlib.h>   
struct node
{  
    struct node *l;  
    struct node *r; 
    int data;   
};      
int size = 0;  
struct node *head, *tail = NULL;  

void addNode(int data) 
{
    struct node newNode = (struct node)malloc(sizeof(struct node));  
    newNode->data = data;  
    if(head == NULL) 
    {  
            head = newNode;  
            tail = newNode; 
            head->l = NULL;  
            tail->r = NULL;  
    }  
    else 
    {  
        tail->r= newNode;      
        newNode->l = tail;  
        tail = newNode;  
        tail->r = NULL;  
    }  
    size++;  
}  
void rotateList(int n) 
{  
    struct node *current = head;  
      if(n == 0 || n >= size)   
        return;  
    else 
    {  
     for(int i = 1; i < n; i++)   
        dt = dt->r;  
        tail->r = head;  
        head = dt->r;  
        head->l = NULL;  
        tail = current;  
        tail->r = NULL;  
    }  
}  
void display() 
{  
    struct node *dt = head;  
    if(head == NULL) 
    {  
        printf("List is empty\n");  
        return;  
    }  
        while(current != NULL) 
    {  
        printf("%d ", dt->data);  
        dt = dt->r;  
    }  
    printf("\n");  
}  
   
int main()  
{  
    int n;
    addNode(1);  
    addNode(2);  
    addNode(3);  
    addNode(4);  
    printf("Original List: \n");  
    display();
    printf("\nEnter the node after which you want to rotate the nodes:");
    scanf("%d",&n);    
    rotateList(n);  
    printf("Updated List: \n");  
    display();  
   
    return 0;  
}