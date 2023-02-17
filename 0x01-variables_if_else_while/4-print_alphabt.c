#include <stdio.h>

/**
 * main - Alphabet
 *
 * this program print the letter of the alphabet except q & e
 *
 * Return: return 0 when success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		if (letter != 'e' && letter != 'q')
		{
		putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
