#include <stdio.h>
#include <string.h>

int main()
{
	char str[256];
	int freq[256][2];
	int lenght = 0, buf;
	printf("Enter a string: ");
	fgets(str, 256, stdin);
	lenght = strlen(str);
	for (int i = 0; i < 256; ++i)
	{
		freq[i][1] = 0;
	}
	for (int i = 0; i < lenght - 1; ++i)
	{
		freq[str[i]][0] = str[i];
		freq[str[i]][1]++;
	}
	// sort
	for (int i = 0; i < 256; ++i)
	{
		if (freq[i][1])
		{
			for (int y = i; y < 256; ++y)
			{
				if (freq[i][1] < freq[y][1])
				{
					buf = freq[y][0];
					freq[y][0] = freq[i][0];
					freq[i][0] = buf;
					buf = freq[y][1];
					freq[y][1] = freq[i][1];
					freq[i][1] = buf;
				}
			}
		}
	}

	for (int i = 0; i < 256; ++i)
	{
		if (freq[i][1])
			printf("%c - %f\n", freq[i][0], (float)freq[i][1] / lenght);

	}
	return 0;
}