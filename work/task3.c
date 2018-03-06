#include "task3.h"

int getMaxWord(char buf[], char word[])
{
	int in = 0, max_lenght = 0, current_lenght = 0;
	char * pmax = 0, *pcurrent = 0;
	for (int i = 0; buf[i]; ++i)
	{
		if (buf[i] != ' ' && buf[i] != '\n')
		{
			if (!in)
			{
				in = 1;
				pcurrent = &buf[i];
			}
			current_lenght++;
		}
		if ((buf[i] == ' ') && in)
		{
			if (max_lenght < current_lenght)
			{
				max_lenght = current_lenght;
				pmax = pcurrent;
			}
			current_lenght = 0;
			in = 0;
		}
	}
	if (in)
	{
		if (max_lenght < current_lenght)
		{
			max_lenght = current_lenght;
			pmax = pcurrent;
		}
	}
	for (int i = 0; i < max_lenght; ++i)
	{
		word[i] = pmax[i];
	}
	word[max_lenght] = '\0';
	return max_lenght;
}