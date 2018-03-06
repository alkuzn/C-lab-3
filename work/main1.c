#include <stdio.h>
#include "task1.h"

#include <string.h>
int main()
{
	char str[256];
	printf("Enter a string: ");
	fgets(str, 256, stdin);
	str[strlen(str) - 1] = '\0';
	printf("Result: %d word(s)\n", wordCount(str));
	return 0;
}