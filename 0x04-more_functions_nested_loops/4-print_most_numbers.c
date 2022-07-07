#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - numbers
 *
 * This function prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: None
 */
void print_most_numbers(void)
{
	int c = 0;

	do
	{
		_putchar(c + '0');
		c++;
	}while (c <= 9 && c != 4 && c != 2);
	_putchar('\n');
}
