#include "main.h"

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
	int root = 0;

	if (n < 0)
		return (-1);
	else if (root * root != n)
		root++;
	else if (root * root == n)
		return (root);
}
