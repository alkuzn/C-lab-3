#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"

#define ARR_SIZE 10

int main()
{
	srand(time(0));
	int arr[ARR_SIZE];
	printf("Array: ");
	for (int i = 0; i < ARR_SIZE; ++i)
	{
		arr[i] = (rand() % 10) * ((rand() % 10) < 5 ? -1:1);
	}

	for (int i = 0; i < ARR_SIZE; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("Sum: %d\n", getSumInt(arr, ARR_SIZE));
	return 0;
}