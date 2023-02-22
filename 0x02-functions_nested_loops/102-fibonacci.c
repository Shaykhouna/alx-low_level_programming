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
	long int prev = 0;
	long int new = 1;
	long int sum = 0;

	while (count <= 50)
	{
		sum = new + prev;
		count++;
		if (count < 50)
		{
			printf("%ld, ", sum);
		}
		else
		{
			printf("%ld\n", sum);
		}
		prev = new;
		new = sum;
	}
	return (0);
}
