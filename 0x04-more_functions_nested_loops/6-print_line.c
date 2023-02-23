#include "main.h"

/**
 * print_line - line
 *
 * This function draws a straight line in the terminal
 * @n: use as count number
 *
 * Return: 0 when done
 */
void print_line(int n)
{
	int c;

	if (n > 0)
	{
		c = n;
		while (c > 0)
		{
			_putchar('_');
			c--;
		}
	}
	_putchar('\n');
}
