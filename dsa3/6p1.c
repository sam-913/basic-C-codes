//2sep
#include<stdio.h>
using namespace std;

int main ()
{

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