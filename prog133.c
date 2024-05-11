//Write contents into a file _ 21.1.22
# include <stdio.h>
# include <string.h>
int main( )
{
FILE *fp;
char s[80] = ("KIIT Deemed to be University");
fp = fopen( "p.txt", "w") ;
if ( fp == NULL)
    printf ( "Cannot open file" ) ;
else  
{
    printf("The file is now opened.\n") ;
    fputs(s, fp) ;
    fputs("\n", fp) ;
    printf("Data successfully written in file p.txt\n");
    printf("The file is now closed.") ;
    fclose(fp) ;
}
}