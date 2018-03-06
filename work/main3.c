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
	/*
	word_lenght = getMaxWord("  \nasfgdsfg\t  f f   s", word);
	word_lenght = getMaxWord("aasdads s s s s asfsd", word);
	word_lenght = getMaxWord("sdfs  sd   dsdf sd   ", word);
	word_lenght = getMaxWord("123456   654321  ", word);
	*/
	printf("Result: %s - %d symbol(s)\n", word, word_lenght);
	return 0;
}