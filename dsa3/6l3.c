#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *leftlink;
    int data;
    struct node *rightlink;
};
void reverse(struct node *head)
{
    struct node *x,*y;
    if(head->rightlink==NULL)
    {
        printf("Only one node present");
    }
    else
    {
        y=head;
        while(y!=NULL)
        {
            x=y->leftlink;
            y->leftlink= y->rightlink;
            y->rightlink=x;
            head=y;
            y=y->leftlink;
        }
    }
    x=head;
    printf("List  : ");
    while(x!=NULL)
    {
        printf("%d\t",x->data);
        x=x->rightlink;
    }
    printf("NULL");
}
int main()
{
    struct node *x,*y,*z;
    int n;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    x=(struct node *)malloc(sizeof(struct node));
    printf("For node 1 : ");
    scanf("%d",&x->data);
    x->leftlink=NULL;
    y=x;
    for(int i=2;i<=n;i++)
    {
        z=(struct node *)malloc(sizeof(struct node));
        printf("For node %d : ",i);
        scanf("%d",&z->data);
        z->leftlink=y;
        y->rightlink=z;
        y=z;
    }
    y->rightlink=NULL;
    y=x;
    reverse(y);
    return 0;
}