/*WAP for a matchstick game being played between the computer and a user. 
Your program should ensure that the computer always wins.
Rules for the game are as follows:
a)There are 21 matchsticks.
b)The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
c)After the person picks, the computer does its picking.
Whoever is forced to pick up the last matchstick loses the game.*/

#include<stdio.h>
int main()
{
    int p, c, m=21, b=0;  
    while(b==0)  
    {  
        printf("\nMatch sticks left = %d\n", m);  
        printf("Pick 1 or 2 or 3 or 4 matches\n");  
        scanf("%d", &p);  
        if(p > 4 || p < 1)  
            continue;  
        m = m - p;  
        printf("matches left = %d\n", m);    
        c = 5 - p;  
        printf("computer picks up %d\n", c);  
        m = m - c;  
        if(m == 1)  
        {  
            printf("\nmatches left = %d\n", m);  
            printf("You lost the Game\n");  
            break;  
        }  
    }   
    return 0;
}
