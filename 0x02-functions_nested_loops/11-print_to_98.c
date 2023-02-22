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
			printf(', ');
			printf("%d", pos);

		}
		_putchar('\n');
	}
	else
	{
		for (pos = n+1; pos <= 98; pos++)
		{
			_putchar(',');
			_putchar(' ');
			printf("%d", pos);
		}
	}
}
