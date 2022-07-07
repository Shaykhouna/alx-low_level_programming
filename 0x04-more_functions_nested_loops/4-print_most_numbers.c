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
	int num;

	do {
		num = c;
		if (num != 2 && num != 4)
			_putchar(c + '0');
		c++;
	} while (num < 10);
	_putchar('\n');
}
