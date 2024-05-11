//p4
#include<stdio.h>

typedef struct
{
    char Book_name[50];
    char Author_name[50];
    int price;
    int pages;
}book;
book b;
int main()
{
    printf("Enter the Name of Book: ");
    scanf("%s",&b.Book_name);
    printf("Enter Author Name: ");
    scanf("%s",&b.Author_name);
    printf("Enter The price: ");
    scanf("%d",&b.price);
    printf("Enter the pages: ");
    scanf("%d ",&b.pages);

    printf("The name of the book is %s\n",b.Book_name);
    printf("The Author of the book is %s\n",b.Author_name);
    printf("The price of the book is %d\n",b.price);
    printf("The no of pages of the book are %d\n",b.pages);
    
    return 0;
}