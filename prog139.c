#include <stdio.h>

int main()
{
  int sai;
  printf("Choose between 1,2 and 3");
  scanf("%d",&sai);
  char san[16];
  printf("Enter name: ");
  scanf("%s", san);
  char rev[16];
  int i, j, sacount = 0;
  switch(sai)
  {
    case 1:
        for(int i=0;san[i]!='\0';i++)
        {
          if (san[i]=='A' || san[i]=='E' || san[i]=='I' || san[i]=='O' || san[i]=='U' || san[i]=='a' || san[i]=='e' || san[i]=='i'|| san[i]=='o' || san[i]=='u')
          san[i]=' ';
          else
          continue;
          
        }
        printf("%s",san);
        break;
    case 2:
    for(int i=0;i<16;i++)
        {
            printf("%c",san[i]);
            if(san[i] == ' ')
            {
                for(int j=0;j<16;j++)
                 printf(" ");
            }
        }
        break;
    case 3:
        
        while (san[sacount] != '\0')
         sacount++;
        j = sacount - 1;
       for (i = 0; i < sacount; i++)
       {
        rev[i] = san[j];
        j--;
        }
      printf("\nString After Reverse: %s",rev);
        break;
    default:
        printf("Choice other than 1, 2 and 3");
        break;
    }
    printf("\n");
  }
  