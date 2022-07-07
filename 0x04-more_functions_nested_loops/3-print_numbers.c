#include <stdio.h>
#include "main.h"

/**
 * print_numbers - numbers
 *
 * This function prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: return 0 when done printing
 */
void print_numbers(void)
{
	char obj;

	for (c = 0; c <= 9; c++)
	{
		obj = c;
		_putchar(obj);
	}
	_putchar('\n');
}
