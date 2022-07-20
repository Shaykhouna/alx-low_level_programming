#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - length
 *
 * This function returns the length of a string
 * @s: string to check
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		s++;
		count = strlen(s) + 1;
		_strlen_recursion(s);
	}
	return (count);
	_putchar('\n');
}
