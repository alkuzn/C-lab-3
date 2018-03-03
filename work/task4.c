#include "task4.h"

int getSum(char buf[])
{
	int sum = 0, count = 0, num = 0;
	while (*buf)
	{
		
		if (('0' <= *buf) && (*buf <= '9'))
		{
			num = num * 10 + (*buf - '0');
			count++;
		}
		else if (count > 0)
		{
			sum += num;
			count = num = 0;
		}
		if (count == 4)
		{
			sum += num;
			count = num = 0;
		}
		buf++;
	}
	return sum;
}