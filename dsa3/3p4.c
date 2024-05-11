#include<stdio.h>
#include<stdlib.h> 
struct node
{
    int data;
     struct node *link;
};
void traverse(struct node *y,struct node *p,struct node *ptr){

    y=p;
    while(y!=NULL){
        printf("%d\t",y->data);
        y=y->link;
    }
}   
void beginning(struct node *p,struct node *ptr,struct node *y){
    struct node *p1;
     printf("enter the element to be inserted at the beginning\n");
    p1=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&p1->data);
    y=p1;
    p1->link=p;
     while(y!=NULL){
        printf("%d\t",y->data);
        y=y->link;
    }
}
void end(struct node *p,struct node *ptr,struct node *y){
    struct node *p1;
    printf("enter the element to be inserted at the end\n");
   p1=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&p1->data);
    y=p;
    while(y->link!=NULL){
        printf("%d\t",y->data);
        y=y->link;
    }
    printf("%d\t",y->data);
    y->link=p1;
    y=y->link;
    printf("%d",y->data);
} 
void count(struct node *y,struct node *p,struct node *ptr){
    int c=0;
     y=p;
    while(y!=NULL){
        c=c+1;
        y=y->link;
    }
    printf("\nthe number of nodes are %d",c);
}
int main(){
    struct node *p,*ptr,*y;
    int n,i,menu;
    printf("enter the number of nodes you want to enter");
    scanf("%d",&n);
    p=(struct node *)malloc(sizeof(struct node));
    printf("enter the data of the 1 node");
    scanf("%d",&p->data);
    y=p;
    for(i=2;i<=n;i++){
        ptr=(struct node *)malloc(sizeof(struct node));
        printf("enter the data of the %d node",i);
        scanf("%d",&ptr->data);
        y->link=ptr;
        y=ptr;
    }
    y->link=NULL;
    printf("for transversal press 1\n");
    printf("for inserting a number at the beginning press 2\n");
    printf("for inserting a number at the end press 3\n");
    printf("for counting the total nodes press 4\n");
    printf("enter a number ");
    scanf("%d",&menu);
    if(menu==1)
    traverse(y,p,ptr);
    printf("\n");
    if(menu==2)
    beginning(p,ptr,y);
    printf("\n");
    if(menu==3)
    end(p,ptr,y);
    if(menu==4)
    count(y,p,ptr);
    return 0;
}
