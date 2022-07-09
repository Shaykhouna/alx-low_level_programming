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
	char multi3 = 'Fizz';
	char multi5 = 'Buzz';
	char mul35 = 'FizzBuzz';

	for (count = 1; count <= 100; count++)
	{
		if (mul3 == 0 && mul5 == 0)
		{
			_putchar(mul35);
			_putchar(' ');
		}
		else if (mul5 == 0)
		{
			_putchar(multi5);
			_putchar(' ');
		}
		else if (mul3 == 0)
		{
			_putchar(multi3);
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
