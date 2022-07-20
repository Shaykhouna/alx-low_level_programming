#include "main.h"

/**
 * _pow_recursion - power
 *
 * This func returns the value of x raised to the power of y
 * @x: value to raise
 * @y: raise to this
 *
 * Return: value raised
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y == 0)
		return (1);
	pow = x * _pow_recursion(x * (y - 1));
	return (pow);
}
