#include "task5.h"

int getSumInt(int arr[], int N)
{
	int sum = 0;
	int *pbegin = 0, *pend = 0;
	for (int i = 0, y = N - 1; (!pbegin || !pend) && (i < y); ++i, --y)
	{
		if (!pbegin && arr[i] < 0)
			pbegin = arr + i + 1;
		if (!pend && arr[y] > 0)
			pend = arr + y - 1;
	}
	while (pbegin <= pend)
	{
		sum += *(pbegin++);
	}
	return sum;
}