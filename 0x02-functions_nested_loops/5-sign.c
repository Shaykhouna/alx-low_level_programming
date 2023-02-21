#include <stdio.h>
#include "main.h"

/**
 * print_sign - sign of number
 *
 * This function that prints the sign of a number
 * @n: is the variable used
 *
 * Return: 1 when +, 0 when zero and -1 when negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
