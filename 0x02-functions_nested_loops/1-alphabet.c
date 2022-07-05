#include <stdio.h>

/**
 * main - alphabet game
 *
 * print alphabet in lower case
 *
 * Return: give back 0
 */

//this print the alphabet in lowercase
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
