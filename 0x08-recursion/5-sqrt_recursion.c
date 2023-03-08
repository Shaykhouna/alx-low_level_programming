#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - square root
 *
 * This function returns the natural square root of a number
 * @n: number used
 *
 * Return: square root of n.
 */
int _sqrt_recursion(int n)
{
	int rt1 = n / 2;
	int rt2 = n / 3;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	if ((rt1 % 2 == 0) && (rt1 * rt1 == n))
		return (rt1);
	else if ((rt2 % 3 == 0) && (rt2 * rt2 == n))
		return (rt2);
	else if (rt1 % 2 == 0)
		return (_sqrt_recursion(rt1));
	else if (rt2 % 3 == 0)
		return (_sqrt_recursion(rt2));
	return (-1);
}
