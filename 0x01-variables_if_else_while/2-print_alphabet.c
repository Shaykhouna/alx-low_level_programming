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

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
