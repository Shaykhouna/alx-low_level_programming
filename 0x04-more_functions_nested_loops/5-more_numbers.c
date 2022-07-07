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

	while (c <= 14)
	{
		_putchar(c + '0');
		c++;
	}
	_putchar('\n');
}
