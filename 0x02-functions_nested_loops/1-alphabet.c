#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - alphabet game
 *
 * print alphabet in lower case
 *
 * Return: give back 0
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
