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
	char = leter;

	for (letter = 'A'; letter <= 'Z'; ++letter)
	{
		do
		{
			letter = tolower(letter);
			putchar(letter);
		}while (letter != 'Q' || letter != 'E');
	}
	return (0);
}
