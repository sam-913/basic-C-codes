
// C Program to reverse a doubl linked list
//30Aug22

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;	
};

void reverse(struct Node **head_ref)
{
	struct Node *temp = NULL;
	struct Node *cur = *head_ref;
	while (cur != NULL)
	{
	    temp = cur->prev;
	    cur->prev = cur->next;
	    cur->next = temp;			
	    cur = cur->prev;
	}
	if(temp != NULL )
		*head_ref = temp->prev;
}

void push(struct Node** head_ref,int new_data)
{
	struct Node* new_node =
	(struct Node*) malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->prev = NULL;
    new_node->next = (*head_ref);	
	if((*head_ref) != NULL)
	(*head_ref)->prev = new_node ;
	(*head_ref) = new_node;
}

void printList(struct Node *node)
{
    while(node!=NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}

int main()
{
    struct Node* head = NULL;
    int data;
    for (int i =1;i<=4;i++)
    {
        printf("Enter data : ");
        scanf("%d", &data);
        push(&head, data);
    }
    printf("Linked list : ");
    printList(head);
    reverse(&head);

    printf("\nReversed Linked list : ");
    printList(head);		

}
