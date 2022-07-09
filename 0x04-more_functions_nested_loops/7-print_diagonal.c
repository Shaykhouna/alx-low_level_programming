#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - diagonal
 *
 * This function draws a diagonal line on the terminal
 * @n: used as counting
 *
 * Return: return 0 when done
 */
void print_diagonal(int n)
{
	int one;
	int two;

	if (n > 0)
	{
		_putchar('\\');
		_putchar('\n');
		for (one = 1; one < n; one++)
		{
			for (two = 1; two <= one; two++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
