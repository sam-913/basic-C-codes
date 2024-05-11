#include<stdio.h>
 
int main() {
    char ch='A';
    void *gp;           // It is a generic pointer
    gp=&ch;             // Address of char variable ch is stored in gp
    printf("\n%c", *(char*)gp); // Explicit typecasting it convert gp to character pointer
    return 0;
}