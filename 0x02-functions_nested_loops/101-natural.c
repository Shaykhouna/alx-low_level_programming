#include <stdio.h>
#include <stdlib.h>

/**
 * main - sum multiples
 *
 * This function compute and print the sum of multiples of 3 or 5
 * @: None
 *
 * Return: Always 0 main function
 */
int main(void)
{
	int n = 0;
	int sum = 0;

	for (n = 1; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
