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
	for (c = 0; c <= 127; c++)
	{
		if (c >= 97 && c <= 122)
		{
			return (1);
		}
		else if (c >= 0 && c <= 96)
		{
			return (0);
		}
		else if (c >= 123 && c <= 127)
		{
			return (0);
		}
	}
	return (0);
}
