#include "task1.h"

int wordCount(char buf[])
{
	int count = 0, in = 0;
	while (*buf)
	{
		if ((*buf != ' ') && !in)
		{
			in = 1;
			count++;
		}
		else if (((*buf == ' ') || (*buf == '\n')) && in)
		{
			
			in = 0;
		}
		buf++;
	}
	return count;
}