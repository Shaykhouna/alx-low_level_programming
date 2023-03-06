#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searcher
 *
 * This function searches a string for any of a set of bytes.
 * @s: research base
 * @accept: byte to lookup
 *
 * Return: pointer to byte s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
