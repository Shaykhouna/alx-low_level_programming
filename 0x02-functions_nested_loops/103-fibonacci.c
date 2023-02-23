#include <stdio.h>
#include <stdlib.h>

/**
 * main - Fibonacci top 50
 *
 * This program prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 when success
 */
int main(void)
{
	long int prev = 0;
	long int new = 1;
	long int sum = 0;
	long int tot = 0;

	while (sum < 4000000)
	{
		sum = new + prev;
		if (sum % 2 == 0)
		{
			tot = tot + sum;
		}
		prev = new;
		new = sum;
	}
	printf("%ld\n", tot);
	return (0);
}
