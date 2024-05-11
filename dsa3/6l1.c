#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
} * head;

struct node *getNode(int d)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = d;
    p->prev = NULL;
    p->next = NULL;
    return p;
}

void insertNode(int data)
{
    struct node *temp = getNode(data);
    struct node *p = head;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        while (p->next != NULL)
        {
            p = p->next;
        }

        p->next = temp;
        temp->prev = p;
    }
}

void display()
{
    struct node *temp = head;
    printf("\nLinked List:\n ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void reversedisplay()
{
    struct node *temp = head;
    printf("\nLinked List:\n ");
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
}

void CheckList()
{
    struct node *temp = head;
    if (temp == NULL)
    {
        printf("\nList is Empty ");
    }
    else
    {
        printf("\nList is not Empty ");
    }
}

void InsertNodeAtPosition(int data, int pos)
{
    int i = 1;
    struct node *temp = getNode(data);
    struct node *p = head;
    if (pos == 1)
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    else
    {
        while (p->next != NULL && i < pos - 1)
        {
            p = p->next;
            i++;
        }

        temp->next = p->next;
        p->next->prev = temp;
        p->next = temp;
        temp->prev = p;
    }
}

void DeleteNodeAtPosition(int pos)
{
    int i = 1;
    struct node *temp;
    struct node *p = head;
    if (pos == 1)
    {
        temp = p;
        head = p->next;
        free(temp);
    }
    else
    {
        while (p->next != NULL && i < pos)
        {
            p = p->next;
            i++;
        }

        temp = p;
        p->prev->next = p->next;
        p->next = p->next;
        free(temp);
    }
}

void deletekey(int key)
{
    struct node *temp;
    struct node *p = head;
    if (p -> data == key)
    {
        temp = p;
        head = p->next;
        free(temp);
    }
    else
    {
        while (p -> next != NULL)
        {
            p = p -> next;
            if (p -> data == key)
            {
                break;
            }
        }

        temp = p;
        p -> prev -> next = p -> next;
        p -> next = p -> next;
        free(temp);
    }
}

void CountNode()
{
    int i = 1;
    struct node* temp = head;

    while(temp -> next != NULL)
    {
        temp = temp -> next;
        i++;
    }

    printf("\nTotal number of nodes in the Linked List is: %d", i);
}

void SearchElement(int d)
{
    int i = 1, flag = 0;
    struct node* temp = head;

    while(temp != NULL)
    {
        if(temp -> data == d)
        {
            flag = 1;
            break;
        }
        
        temp = temp -> next;
        i++;
    }

    if(flag == 1)
    {
        printf("\nElement FOUND in Linked List at position %d ",i);
    }    
    else
    {
        printf("\nElement NOT FOUND in Linked List");    
    }    
}

int main()
{
    int choice, data, pos;
    do
    {
        printf("\n");
        printf("\n1- Insert Node");
        printf("\n2- Display Forward Linked List");
        printf("\n3- Display Backward Linked List");
        printf("\n4- Check if the list is empty");
        printf("\n5- Insert a node at the certain position (at beginning/end/any position)");
        printf("\n6- Delete a node at the certain position (at beginning/end/any position)");
        printf("\n7- Delete a node for a given key");
        printf("\n8- Count the total number of nodes");
        printf("\n9- Search for an element in the linked list");
        printf("\n0- Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Node Data Value: ");
            scanf("%d", &data);
            insertNode(data);
            break;

        case 2:
            display();
            break;

        case 3:
            reversedisplay();
            break;

        case 4:
            CheckList();
            break;

        case 5:
            printf("\nEnter position to insert node: ");
            scanf("%d", &pos);
            printf("\nEnter Data to insert in node: ");
            scanf("%d", &data);
            InsertNodeAtPosition(data, pos);
            break;

        case 6:
            printf("\nEnter position to Delete node: ");
            scanf("%d", &pos);
            DeleteNodeAtPosition(pos);
            break;

        case 7:
            printf("\nEnter Key data to Delete node: ");
            scanf("%d", &data);
            deletekey(data);
            break;

        case 8:
            CountNode();
            break;

        case 9:
            printf("\nEnter Data to search in Linked List: ");
            scanf("%d", &data);
            SearchElement(data);
            break;

        case 0:
            exit(0);

        default:
            break;
        }

    } while (choice != 0);

    printf("\n");
    return 0;
}