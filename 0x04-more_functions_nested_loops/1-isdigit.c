#include <stdio.h>
#include "main.h"

/**
 * _isdigit - uppercase
 *
 * This function that checks for a digit (0 through 9)
 * @c: used as variable
 *
 * Return: return 0 when success
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
