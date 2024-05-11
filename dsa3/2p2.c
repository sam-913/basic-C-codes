//p2
#include <stdio.h>

int countPos(int* arr, int n)
{
	int pos = 0;
	int i;
	for (i = 0; i < n; i++) 
    {
		if (arr[i] > 0)
			pos++;
	}
	return pos;
}

int countNeg(int* arr, int n)
{
	int neg = 0;
	int i;
	for (i = 0; i < n; i++) {
		if (arr[i] < 0)
			neg++;
	}
	return neg;
}

void printArray(int* arr, int n)
{
	int i;

	printf("Array: ");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = { 2, -1, 5, 6, 0, -3 };
	int n;
	n = sizeof(arr) / sizeof(arr[0]);

	printArray(arr, n);

	printf("Count of Positive elements = %d\n", countPos(arr, n));
	printf("Count of Negative elements = %d\n", countNeg(arr, n));

	return 0;
}