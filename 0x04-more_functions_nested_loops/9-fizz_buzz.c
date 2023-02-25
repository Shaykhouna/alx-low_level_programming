#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - interview
 *
 * This program prints the numbers from 1 to 100
 *
 * Return: 0 when done
 */
int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0 && count % 5 == 0)
		{
			printf("FizzBuzz");
			_putchar(' ');
		}
		else if (count % 5 == 0)
		{
			printf("Buzz");
			_putchar(' ');
		}
		else if (count % 3 == 0)
		{
			printf("Fizz");
			_putchar(' ');
		}
		else
		{
			if (count > 9)
			{
				_putchar(count % 10 + '0');
				break;
			}
			_putchar(count + '0');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
