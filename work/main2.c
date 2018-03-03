#include <stdio.h>
#include <string.h>

int main()
{
	int count = 0, in = 0;
	char buf[256];
	
	printf("Enter a string:");
	fgets(buf, 256, stdin);

	for (int i = 0; buf[i]; ++i)
	{
		if (buf[i] != ' ' && buf[i] != '\n')
		{
			if (!in)
				in = 1;
			printf("%c", buf[i]);
			count++;
		}
		if (((buf[i] == ' ') || (buf[i] == '\n')) && in)
		{
			in = 0;
			printf(": %d\n", count);
			count = 0;
		}
	}
	return 0;
}