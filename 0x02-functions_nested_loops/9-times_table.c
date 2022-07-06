#include <stdio.h>
#include "main.h"

/**
 * times_table - times table
 *
 * This function that prints the 9 times table, starting with 0
 *
 * Return: return none as value is void
 */
void times_table(void)
{
	int row;
	int col;
	int res;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			res = row * col;
			if ((res / 10) == 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
				if (col != 9)
					_putchar(',');
			}
		}
		_putchar('\n');
	}
}
