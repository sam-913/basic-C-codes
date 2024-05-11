//
int main()
{
    int i=1, score, sum_score;
    float avg_score;
    repeat:
    print("/nEnter the score of next player no %d",&i)
    scanf ("%d", &score);
    sum_score += score;
    i++:
    if (i <= 11) goto repeat;
        avg_score= sum_score/11.0;
    printf("Total Score=%d and Average Score = %f",sum_score,avg_score);
    return 0:
}
#include <stdio.h>
int main ()
{
    int score, i=1, count=1;
    again:
    printf( "\nEnter the score of next player number %d: ", i);
    scanf("%d", &score);
    if (score<0) goto again;
    count+=score/100;
    i++;
    if (i<=11) goto again;
        printf ("Total number of players who made a century: %d", count);
    return 0;
}
