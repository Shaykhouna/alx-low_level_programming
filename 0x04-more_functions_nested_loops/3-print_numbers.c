#include <stdio.h>
#include "main.h"

/**
 * print_numbers - numbers
 *
 * This function prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: return 0 xhen done printing
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
