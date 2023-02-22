#include <stdio.h>
#include <stdlib.h>

/**
 * main - Fibonacci top 50
 *
 * This program prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Returns: Always 0 when success
 */
int main(void)
{
	int count = 0;
	int prev = 0;
	int new = 1;

	printf("0, ");
	while (count < 50)
	{
		new = new + prev;
		count++;
		if (count != 49)
		{
			printf("%d, ", new);
		}
		else
		{
			printf("%d\n", new);
		}
		prev = new;
	}
	return (0);
}
