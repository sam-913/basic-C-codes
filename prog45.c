//0-9 and 9-0_25nov

#include <stdio.h>

int main ()
{
    int i;
    int j=0;
    for (i=1;i < 10;i++)
    {
        j=(10-i);
        printf("%d \t %d \n",i,j);
    }
    return 0;
}
