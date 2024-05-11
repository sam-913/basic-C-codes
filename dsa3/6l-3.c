#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *leftlink;
    int data;
    struct node *rightlink;
};
void display(struct node *head, int n)
{
    struct node *y;
    y=head;
    int c=0;
    while(y!=NULL)
    {
        printf("%d\t",y->data);
        y=y->rightlink;
        c++;
        if(c>=n)break;
    }
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
    y->rightlink=x;
    y=x;
    display(y,n);
    return 0;
}