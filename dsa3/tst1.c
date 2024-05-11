#include <stdio.h>
int main ()
{
    char ex [60];
    int x=0,i=0;
    printf("\nEnter expression");  
    scanf("%s", ex);
    while(ex[i]!= '\0')  
    {
        if (ex[i]=='(')
        {
            x++;
        }
        if ( ex[i]==')')  
        {  
            x--;
            if(x<0)
            {
                break;
            }
        }  
        i++;
    }
    if (x==0)
        printf("Expression is balanced !");
    else
        printf("Expression is not balanced !");
    return 0;
}