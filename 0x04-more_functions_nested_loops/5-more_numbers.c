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
	int count = 0;
	int dec = c / 10;
	int unit = c % 10;

	for (count = 0; c < 11; c++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar(dec + '0');
			_putchar(unit + '0');
		}
		_putchar('\n');
	}
}
