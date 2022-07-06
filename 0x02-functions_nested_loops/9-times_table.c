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

	for (row = 0; row <= 9; row++)
	{
		if (row = 0)
			_putchar(row * col);
		else
		{
			_putchar(',');
			_putchar(' ');
			for (col = 0; col <= 9; col++)
			{
				if (((row * col) / 10) == 0)
				{
					_putchar(' ');
					_putchar((row * col) + '0');
				}
				else
				{
					_putchar((row * col) / 10 + '0');
					_putchar((row * col) % 10 + '0');
				}
			}
		}
	_putchar('\n');
	}
}
