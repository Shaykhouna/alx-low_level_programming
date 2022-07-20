#include "main.h"

/**
 * factorial - factorial
 *
 * This function returns the factorial of a given number
 * @n: given number
 *
 * Return: factorial of n.
 */
int factorial(int n)
{
	int fac = 0;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		fac = n * factorial(n - 1);
		return (fac);
}
