#include <stdio.h>
#include <string.h>

/**
 * main - combination of digit
 *
 * This program prints all possible different combinations of two digits
 *
 * Return: return 0 when program successful
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			if (num1 != num2 && strcmp("num1""num2" != "num2""num1"))
			{
			putchar(num1 + '0');
			putchar(num2 + '0');
			}
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
