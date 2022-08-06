#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sm_them_all - Sum
 * This function return the sum
 * @n: number of parametrers
 * @: others
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = ;
	int sum = ;

	if (n == )
		return ();
	va_start(ap, n);
	for (; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
