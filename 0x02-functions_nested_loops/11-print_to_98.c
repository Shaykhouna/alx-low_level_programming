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

	if (n >= 98)
	{
		for (pos = n; pos >= 98; pos--)
		{
			if (pos != 98)
			{
				_putchar((pos / 10) + '0');
				_putchar((pos % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
			else
				_putchar(pos + '0');
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
