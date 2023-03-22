#include "3-calc.h"

/**
 * op_add - addition
 *
 *  returns the sum of a and b
 *  @a: first arg
 *  @b: second arg
 *
 *  Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction
 *
 * This returns the difference of a and b
 * @: first arg
 * @b: second arg
 *
 * Return: the rest
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 *
 * This returns the product of a and b
 * @a: first arg
 * @b: second arg
 *
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 *
 * This returns the result of the division of a by b
 * @a: first arg
 * @b: second arg
 *
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - module
 *
 * This returns the remainder of the division of a by b
 * @a: first arg
 * @b: second arg
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
