#include <stdio.h>
#include "main.h"

/**
 * more_numbers - numbers
 *
 * This function prints 10 times the numbers, from 0 to 14
 *
 * Return: when 0 done
 */
void more_numbers(void)
{
	int c = 0;

	for (c = 0; c <= 14; c++)
	{
		if (c > 9)
			_putchar(c / 10 + '0');
		_putchar(c % 10 + '0');
	}
	_putchar('\n');
}
