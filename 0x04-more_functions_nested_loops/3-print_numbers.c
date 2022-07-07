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
	for (c = 0; c <= 127; c++)
	{
		if (c >= 0 && c <= 9)
		{
			_putchar(c +'0');
		}
	}
	_putchar('\n');
}
