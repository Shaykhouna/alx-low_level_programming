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
	if (n > 0)
	{
		while (c <= n)
			_putchar('_');
	}
	_putchar('\n');
	return(0);
}
