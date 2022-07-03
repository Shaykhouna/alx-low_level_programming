#include <stdio.h>

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
	int comb;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			comb = num1 && num2;
			putchar(comb, '0');
		}
	}
	return (0);
}
