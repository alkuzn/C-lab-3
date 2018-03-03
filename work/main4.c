#include <stdio.h>
#include "task4.h"

int main()
{
	char str[256];
	printf("Enter a string: ");
	fgets(str, 256, stdin);
	printf("Sum: %d\n", getSum(str));
	return 0;
}