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
	int long c = 0;
	int long count = 0;

	while (count < 10)
	{
		do
		{
			if (c > 9)
			{
				_putchar('1');
			}
			_putchar(c % 10 + '0');
			c++;
		} while (c <= 14)
		_putchar('\n');
	}
}
