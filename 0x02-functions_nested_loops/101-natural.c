#include <stdio.h>
#include <stdlib.h>

/**
 * natural - sum multiples
 *
 * This function compute and print the sum of multiples of 3 or 5
 * @: None
 *
 * Returns: Nothing void function
 */
void natural(void)
{
	int m = 0;
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
}
