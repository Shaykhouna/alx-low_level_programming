#include <stdio.h>
#include "main.h"

/**
 * _islower - lowercase
 *
 * this function checks for lowercase character
 * int c: is the variable it takes
 *
 * Return: 1 when true and 0 when none
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
