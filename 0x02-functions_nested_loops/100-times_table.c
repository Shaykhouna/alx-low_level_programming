#include <stdio.h>
#include <stdlib.h>

/**
 * print_times_table - print times table
 *
 * This function prints times table of the given number
 * @n: the given number to print times table for
 *
 * Returns: nothing due to void
 */
void print_times_table(int n)
{
	int one = 0;
	int two = 0;
	int tim = 0;

	if (n <= 15 && n >= 0)
	{
		for (one = 0; one <= n; one++)
		{
			for (two = 0; two < n; two++)
			{
				tim = one * two;
				if (one * (two + 1) > 100 )
				{
					printf("%d ", tim);
				}
				else if (one * (two + 1) >= 10)
				{
					printf("%d,  ", tim);
				}
				else if (one * (two + 1) < 10)
				{
					printf("%d,   ", tim);
				}
			}
			printf("%d\n", one * n);
		}
	}
}
