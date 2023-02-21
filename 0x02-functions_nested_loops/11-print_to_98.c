#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - numbers to 98
 *
 * This function that prints all natural numbers from n to 98
 * @n: the variable use as reference
 *
 * Return: return 0 when done
 */
void print_to_98(int n)
{
	int pos;

	_putchar(n);
	if (n > 98)
	{
		for (pos = n-1; pos >= 98; pos--)
		{
			_putchar(',');
			_putchar(' ');
			if ((pos != 98) && (pos > 99))
			{
				_putchar((pos / 100) + '0');
				_putchar((((pos * 10) % 100) / 10) + '0');
				_putchar((pos % 10) + '0');
			}
			else
			{
				_putchar((pos / 10) + '0');
				_putchar((pos % 10) + '0');
			}

		}
		_putchar('\n');
	}
	else
	{
		for (pos = n; pos <= 98; pos++)
		{
			_putchar((pos / 10) + '0');
			_putchar((pos % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
