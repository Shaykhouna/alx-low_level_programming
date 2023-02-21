#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - last digit
 *
 * This function that prints the last digit of a number
 * @c: used as variable
 *
 * Return: give back 0 when success
 */
int print_last_digit(int c)
{
	int digit;

	if (c < 0)
	{
		c = c * (-1);
	}
	digit = c % 10;
	return (digit);
}
