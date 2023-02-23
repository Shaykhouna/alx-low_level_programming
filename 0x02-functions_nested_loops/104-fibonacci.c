#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * This program finds and prints the first 98 Fibonacci numbers
 *
 * Return: 0 when success
 */
int main(void)
{
	long int prev = 0;
	long int new = 1;
	long int sum = 0;
	int count = 0;

	while (count <= 98)
	{
		sum = new + prev;
		if (count < 98)
		{
			printf("%ld, ", sum);
		}
		else
		{
			printf("%ld\n", sum);
		}
		prev = new;
		new = sum;
		count++;
	}
	return (0);
}
