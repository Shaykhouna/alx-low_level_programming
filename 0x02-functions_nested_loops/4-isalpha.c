#include <stdio.h>
#include "main.h"

/**
 * _isalpha - alphabet character
 *
 * This is a function that checks for alphabetic character
 * @c: this represent the variable to check
 *
 * Return: return 0 when none and 1 when right
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
