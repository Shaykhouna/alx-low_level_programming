#include <stdio.h>
#include "main.h"

/**
 * _isupper - uppercase
 *
 * This function checks for uppercase character
 * @c: used as variable
 *
 * Return: 0 as won
 */
int _isupper(int c)
{
	if (c >= "A" && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
