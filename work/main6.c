#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"

#define ARR_SIZE 10

int main()
{
	srand(time(0));
	int arr[ARR_SIZE];
	printf("Array: ");
	for (int i = 0; i < ARR_SIZE; ++i)
	{
		arr[i] = (rand() % 20) * ((rand() % 10) < 5 ? -1 : 1);
	}

	for (int i = 0; i < ARR_SIZE; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("Result: %d\n", getSumMaxMin(arr, ARR_SIZE));
	return 0;
}