#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Software is eating the World
 *
 * This program that prints all possible combinations of two two-digit numbers
 *
 * Return: return 0 at suuccess
 */
int main(void)
{
	int n;
	int m;
	int o;
	int p;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m < 9; m++)
		{
			for (o = 0; o <= 9; o++)
			{
				for (p = 0; p <= 9; p++)
				{
					if ((n <= o && m < p) || (n < o && m <= p) || (m != p))
					{
						putchar(n + '0');
						putchar(m + '0');
						putchar(' ');
						putchar(o + '0');
						putchar(p + '0');
						if (n != 9 || m != 8 || o != 9 || p != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
