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
	int rt1 = 2;
	int rt;

	if (n < 0 || n == 2)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else 
	{
		rt = ((rt1 + (n / rt1)) / 2);
		if (rt * rt == n)
		{
			if (rt % 2 == 0 || rt % 3 == 0)
				return (rt);
			else
				return (-1);
		}
		return (-1)
	}
}
