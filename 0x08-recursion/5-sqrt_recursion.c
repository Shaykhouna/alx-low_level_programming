#include "main.h"

/**
 * sqrt_search - Searching
 *
 * this function search for a sqrt
 * @i: check
 * @j: checker
 *
 * Return: sqrt found.
 */
int sqrt_count(int i, int j)
{
	if (j * j == i)
		return (j);
	if (j * j > i)
		return (-1);
	return (sqrt_search(i, j + 1));
}

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
	return (sqrt_search(n, 0));
}
