#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};
struct node *addb(struct node *s,int data)
{
        struct node *tp;
        tp=(struct node *)malloc(sizeof(struct node));
        tp->info=data;
        tp->link=s;
        s=tp;
        return s;
}
struct node *adde(struct node *s,int data)
{
        struct node *p,*tp;
        tp=(struct node *)malloc(sizeof(struct node));
        tp->info=data;
        p=s;
        while(p->link!=NULL)
                p=p->link;
        p->link=tp;
        tp->link=NULL;
        return s;
}
struct node *create_list(struct node *s)
    {
        int i,n,data;
        printf("Enter the no. of nodes : ");
        scanf("%d",&n);
        s=NULL;
        if(n==0)
            return s;

        printf("\nEnter the element to be inserted : ");
        scanf("%d",&data);
        s=addb(s,data);

        for(i=2;i<=n;i++)
        {
                printf("\nEnter the element to be inserted : ");
                scanf("%d",&data);
                s=adde(s,data);
        }
        return s;
    }

void display (struct node *s)
{
    struct node *p;
    if(s==NULL)
        {
            printf("Empty\n");
            return;
        }
        p=s;

        while(p!=NULL)
        {
                printf("%d ",p->info);
                p=p->link;
        }
}
void EvenOdd(struct node *s1,struct node **s2,struct node **s3 )
{
        struct node *p1=s1, *p2=*s2, *p3=*s3;

        while(p1!=NULL)
        {
                if((p1->info)%2 != 0 )
                {
                        if(*s2==NULL)
                            *s2 = addb(*s2,p1->info);
                        else
                            *s2 = adde(*s2,p1->info);
                }
                else
                {
                        if(*s3==NULL)
                                *s3 = addb(*s3,p1->info);
                        else
                                *s3 = adde(*s3,p1->info);
                }
                p1=p1->link;
        }
}
int main()
{
        struct node *s1=NULL,*s2=NULL,*s3=NULL;
        s1=create_list(s1);
        EvenOdd(s1, &s2, &s3);
        printf("\nList :\n");
        display(s1);
        printf("\nOdd No. List :\n");
        display(s2);
        printf("\nEven No. List :\n");
        display(s3);

        return 0;
}


