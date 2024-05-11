#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};


void insertBeginning(struct Node** head, int data)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;

    *head = newNode;
    printf("%d Insertion Successful\n",newNode->data);
}

void printLinkedList(struct Node* node)
{
    printf("\nLinked List: ");
    while(node!=NULL){
        printf("%d ",node->data);
        node = node->next;
    }
    
    printf("\n");
}

int main()
{
    struct Node* head = NULL;
    int input, item;
    
    do{
        printf ("\nEnter the item to insert?\n");
        scanf ("%d", &item);
        insertBeginning(&head, item);
        
        printf ("\nPress 0: To Exit\n");
        printf ("Press 1: To insert more items\n");
        scanf ("%d", &input);
    }while (input == 1);
    printLinkedList(head);
    
    return 0; 
}