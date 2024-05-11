#include<stdio.h>
#include<math.h>
int main()
{
	float dist = 0.0, sum = 0.0, y1 , x1  ;
	int x[10][10], i, j ;
	printf("Enter the coordinates of 10 points : \n\n");
    for (int i = 0; i < 5; ++i)
    for (int j = 0; j < 2; ++j) 
    {
        scanf("%d", &x[i][j]);
    }
    printf("\nEntered matrix : \n");
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 2; ++j) 
            printf("%d  ", x[i][j]);
        printf("\n");
    }
	for (i = 0; i<10; i++)
    {
        for (j = 0; j<2; j++)
        {
		x1=pow((x[i+1][j]-x[i][j]),2);
        y1=pow((x[i][j+1]-x[i][j]),2);
        dist=sqrt(x1+y1);
        sum+=dist;
        }
    }
	printf("The total distance between first and last point is %f", sum);
	return 0;
}
