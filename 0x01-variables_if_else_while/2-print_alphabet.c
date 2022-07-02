#include <stdio.h>
#include <ctype.h>

/**
 * main - Alphabet
 *
 * this program print the letter of the alphabet
 *
 * Return: return 0 when success
 */
int main(void)
{
	char letter;

	for (letter = 'A'; letter <= 'Z'; ++letter)
	{
		letter = tolower(letter);
		putchar(letter);
	}
	return (0);
}