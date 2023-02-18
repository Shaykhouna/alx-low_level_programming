#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Print Combination
 *
 * This program prints all possible different combinations of three digits
 *
 * Return: give 0 when success
 */
int main(void)
{
	int num2;
	int num3;
	int num4;

	for (num2 = 0; num2 < 8; num2++)
	{
		for (num3 = 0; num3 < 9; num3++)
		{
			for (num4 = 0; num4 <= 9; num4++)
			{
				if (num2 < num3 && num3 < num4)
				{
					putchar(num2 + '0');
					putchar(num3 + '0');
					putchar(num4 + '0');
					if (num2 != 7 || num3 != 8 || num4 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return(0);
}
