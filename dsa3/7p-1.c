#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int cof;
    int exp;
    struct node *link;
};

struct node *create(struct node *q);
struct node *insert(struct node *ptr, struct node *p);
void display(char const *tag, struct node *ptr);
void err_exit(char const *tag);

struct node *create(struct node *q)
{
    int i, n;
    printf("enter the number of nodes: ");
    if (scanf("%d", &n) != 1)
        err_exit("Read error (number of nodes)");
    for (i = 0; i < n; i++)
    {
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        if (ptr == 0)
            err_exit("Out of memory (1)");
        printf("enter the coefficient and exponent respectively: ");
        if (scanf("%d%d", &ptr->cof, &ptr->exp) != 2)
            err_exit("Read error (coefficient and exponent)");
        ptr->link = NULL;
        q = insert(ptr, q);
        display("after input", q);
    }
    return q;
}

struct node *insert(struct node *ptr, struct node *p)
{
    struct node *temp, *b;
    if (p == NULL)
        p = ptr;
    else
    {
        display("insert: p   = ", p);
        display("insert: ptr = ", ptr);
        if (p->exp < ptr->exp)
        {
            ptr->link = p;
            p = ptr;
        }
        else
        {
            temp = p;
            while ((temp->link != NULL) && (temp->link->exp < ptr->exp))
                display("insert: tmp = ", temp),
                temp = temp->link;
            display("insert: post loop", temp);
            b = temp->link;
            temp->link = ptr;
            ptr->link = b;
        }
    }
    return p;
}