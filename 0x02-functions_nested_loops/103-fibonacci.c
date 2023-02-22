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

	while (sum <= 4000000)
	{
		sum = new + prev;
		if (4000000 - new < prev)
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
