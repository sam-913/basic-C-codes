#include<stdio.h>
#include<stdlib.h>
struct node
{
    int row;
    int col;
    int item;
    struct node *link;
};
void printing(struct node *head, int m, int n)
{
    struct node *y;
    y=head;
    while(y!=NULL)
    {
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(y->row==i && y->col==j)
                {
                    printf("%d ",y->item);
                    y=y->link;
                }
                else
                {
                    printf("0 ");
                }
            }
            printf("\n");
        }
    }
}
int main()
{
    struct node *a,*b,*c;
    int m,n,non;
    printf("Enter the row size : ");
    scanf("%d",&m);
    printf("Enter the column size : ");
    scanf("%d",&n);
    printf("Enter number of non zero-elements  : ");
    scanf("%d",&non);
    a=(struct node *)malloc(sizeof(struct node));
    printf("Enter row for node 1 : ");
    scanf("%d",&a->row);
    printf("Enter column for node 1 : ");
    scanf("%d",&a->col);
    printf("Enter item for node 1 : ");
    scanf("%d",&a->item);
    b=a;
    for(int x=2;x<=non;x++)
    {
        c=(struct node *)malloc(sizeof(struct node));
        printf("Enter row for node %d : ",x);
        scanf("%d",&c->row);
        printf("Enter column for node %d : ",x);
        scanf("%d",&c->col);
        printf("Enter item for node %d : ",x);
        scanf("%d",&c->item);
        b->link=c;
        b=c;
    }
    b->link=NULL;
    b=a;
    printing(b,m,n);
    return 0;
}