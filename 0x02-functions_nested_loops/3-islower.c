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
	for (c = 0; c <= 256; c++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			return (1);
		}
		return (0);
	}
}
