#include <stdio.h>
#include "main.h"

/**
 * more_numbers - numbers
 *
 * This function prints 10 times the numbers, from 0 to 14
 *
 * Return: when 0 done
 */
void more_numbers(void)
{
	int c = 0;
	int count = 0;

	while (count <= 10)
	{
		while (c <= 14)
		{
			_putchar();
			c++;
		}
		_putchar('\n');
		count++;
	}
}
