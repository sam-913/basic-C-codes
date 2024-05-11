#include<stdio.h>
#include<math.h>
int main(){
    float dist = 0, y1 , x1 ;
    int x[10][2], i, j;
    printf("Enter the coordinates of 10 points : \n\n");
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            scanf("%d", &x[i][j]);
        }
    }
    printf("\nEntered matrix : \n");
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 2; ++j)
            printf("%d ", x[i][j]);
        printf("\n");
    }
    for (int i = 0; i<9; i++)
    {
        x1=pow(x[i+1][0]-x[i][0],2);
        y1=pow(x[i+1][1]-x[i][1],2);
        dist+=sqrt(x1+y1);
    }
    printf("The total distance between first and last point is %f", dist);
    return 0;
}