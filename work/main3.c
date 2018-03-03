#include <stdio.h>
#include <string.h>
#include "task3.h"

int main()
{
	char str[256];
	char word[256];
	int word_lenght = 0;
	printf("Enter a string:");
	fgets(str, 256, stdin);
	word_lenght = getMaxWord(str, word);
	printf("Result: %s - %d symbol(s)\n", word, word_lenght);
	return 0;
}