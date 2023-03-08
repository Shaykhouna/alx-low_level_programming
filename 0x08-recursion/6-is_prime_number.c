#include "main.h"

/**
 * is_prime_number - Prime number
 *
 * This function returns 1 if the input integer is a prime number
 * @n: number to check
 *
 * Return: 1 when True and 0 when False
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n > 1)
	{
		if (n == 2)
			return (1);
		else if (n % 2 != 0 && n % 3 != 0)
			return (1);
	}
	return (is_prime_number(n));
}
