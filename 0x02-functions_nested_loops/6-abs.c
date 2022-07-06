#include <stdio.h>
#include "main.h"

/**
 * _abs - absolute
 *
 * This function that computes the absolute value of an integer
 *
 * Return: 0 when success
 */
int _abs(int)
{
	int n;

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * (-1);
		return (n);
	}
}
