//7.1.22
#include<stdio.h>
int main()
{       
    char a[] = "Yudhistir", b[] = "Bhim", c[]= "Arjun", d[] = "Nakul", e[] = "Sahadev";
    char *p[5];
    int i,j,count = 0;
    p[0]=a; p[1]=b;p[2]=c; p[3] = d ; p[4] = e;
    for(i=0;i<5;i++)
        for(j=0;p[i][j];j++)
            count += p[i][j]=='a';
    printf("\nCount = %d\n",count);    
    return 0;
}