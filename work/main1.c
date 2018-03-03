#include <stdio.h>
#include "task1.h"

int main()
{
	char str[256];
	printf("Enter a string: ");
	fgets(str, 256, stdin);
	printf("Result: %d word(s)\n", wordCount(str));
	return 0;
}