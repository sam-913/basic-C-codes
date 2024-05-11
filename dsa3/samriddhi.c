#include <stdio.h>  
#include<stdlib.h>   
struct node{  
    int data;  
    struct node *previous;  
    struct node *next;  
};      
int size = 0;  
struct node *head, *tail = NULL;  
void addNode(int data) {  
     
    struct node newNode = (struct node)malloc(sizeof(struct node));  
    newNode->data = data;  
      
    
    if(head == NULL) {  
       
        head = tail = newNode;  
        
        head->previous = NULL;  
       
        tail->next = NULL;  
    }  
    else {  
        
        tail->next = newNode;  
         
        newNode->previous = tail;  
         
        tail = newNode;  
       
        tail->next = NULL;  
    }  
    
    size++;  
}  
void rotateList(int n) {  
    struct node *current = head;  
      if(n == 0 || n >= size)   
        return;  
    else {  
     for(int i = 1; i < n; i++)   
        current = current->next;  
        tail->next = head;  
        head = current->next;  
        head->previous = NULL;  
        tail = current;  
        tail->next = NULL;  
    }  
}  
void display() {  
struct node *current = head;  
if(head == NULL) {  
    printf("List is empty\n");  
    return;  
    }  
while(current != NULL) {  
    printf("%d ", current->data);  
    current = current->next;  
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
    addNode(5);  
    printf("Original List: \n");  
    display();
    printf("\nEnter the node after which you want to rotate the nodes:");
    scanf("%d",&n);    
    rotateList(n);  
    printf("Updated List: \n");  
    display();  
   
    return 0;  
}