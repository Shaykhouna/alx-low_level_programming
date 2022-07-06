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
	int obj;

	if ('a' <= c <= 'z')
	{
		_islower(c) = 1;
		obj = _islower(c);
	}
	else 
	{
		_islower(c) = 0;
		obj = _islower(c);
	}
	return (obj);
}
