#include <stdio.h>

/**
 * main - Smile in the mirror
 *
 * this program print the letter of the alphabet in reverse
 * 
 * Return: return 0 when success
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter <= 'a'; ++letter)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
