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
	for (c = 'a'; c <= 'z'; c++)
		return (1);
	for (c = 'A'; c <= 'Z'; c++)
		return (0);
	for (c = 0; c <= '9'; c++)
		return (0);
	return (0);
}
