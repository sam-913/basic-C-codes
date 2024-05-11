//display contents of a file on screen
//EOF = End of the File
#include<stdio.h>
int main(){
    FILE*fp;
    char ch;
    fp = fopen("PR1.txt", "r");
    while((ch = fgetc(fp)) != EOF )
    {
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}