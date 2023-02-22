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
	int sum = 0;

	printf("0, 1, ");
	while (count < 50)
	{
		sum = new + prev;
		count++;
		if (count < 49)
		{
			printf("%d, ", sum);
		}
		else
		{
			printf("%d\n", sum);
		}
		prev = new;
		new = sum;
	}
	return (0);
}
