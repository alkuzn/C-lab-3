#include "task6.h"

int getSumMaxMin(int arr[], int N)
{
	int begin = 0, end = 0, index_min = 0, index_max = 0, sum = 0;
	for (int i = 0; i < N; ++i)
	{
		if (arr[i] < arr[index_min])
		{
			index_min = i;
		}
		if (arr[index_max] < arr[i])
		{
			index_max = i;
		}
	}
	if (index_min < index_max)
	{
		begin = index_min;
		end = index_max;
	}
	else
	{
		begin = index_max;
		end = index_min;
	}
	for (int i = begin +1; i < end; ++i)
	{
		sum += arr[i];
	}
	return sum;
}