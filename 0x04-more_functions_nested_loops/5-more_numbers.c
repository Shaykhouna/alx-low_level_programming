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
	int c, count;

	for (c = 0; c <= 14; c++)
	{
		for (count = 0; count <= 14; count++)
		{
			if (count >= 10)
				_putchar('1');
			_putchar(count % 10 + '0');
		}
		_putchar('\n');
	}
}
