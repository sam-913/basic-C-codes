//struc var
#include <stdio.h>
#include <string.h>
struct book 
{
char name[25] ;
char author[25] ;
int cost ;
};
void displayInd( char*s, char *t, int c)
{
printf ( "\n%s %s %d", s, t, c) ;
}