#include "main.h"

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
	int i = 0;
	int count = 0;

	if (s[i] != '\0')
	{
		i++;
		count++;
		s++;
		_strlen_recursion(s);
	}
	return (count);
}
