#include <stdio.h>

/**
 * main - Alphabet
 *
 * this program print the alphabet in lower and upper case
 *
 * Return: return 0 when success
 */
int main(void)
{
	char letter;

	for (letter = 'A'; letter <= 'Z'; ++letter)
	{
		putchar(letter);
		letter = tolower(letter);
		putchar(letter);
	}
	return (0);
}
