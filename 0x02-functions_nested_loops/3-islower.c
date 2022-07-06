#include <stdio.h>
#include "main.h"

/**
 * _islower - lowercase
 *
 * this function checks for lowercase character
 *
 * Return: 1 when true and 0 when none
 */
int _islower(int c)
{
	int ca;

	if (_islower(c))
	{
		for (ca = 'a'; ca <= 'z'; ca++)
			return (1);
		for (ca = 'A'; ca <= 'Z'; ca++)
			return (0);
		for (ca = 0; ca <= 9; ca++)
			return (0);
	}
	return (0);
}
