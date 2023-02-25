#include <stdio.h>
#include "main.h"

/**
 * fizzbuzz - interview
 *
 * This program prints the numbers from 1 to 100
 *
 * Return: 0 when done
 */
int main(void)
{
	int count = 1;
	int mul3 = count % 3;
	int mul5 = count % 5;
	int multi3 = 'Fizz';
	int multi5 = 'Buzz';
	int mul35 = 'FizzBuzz';

	for (count = 1; count <= 100; count++)
	{
		if (mul3 == 0 && mul5 == 0)
		{
			printf("FizzBuzz");
			_putchar(' ');
		}
		else if (mul5 == 0)
		{
			printf("Buzz");
			_putchar(' ');
		}
		else if (mul3 == 0)
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
