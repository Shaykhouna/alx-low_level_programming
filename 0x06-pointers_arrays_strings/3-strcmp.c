#include "main.h"

/**
 * _strcmp - comparer
 *
 * This function compares two strings
 * @s1: string one
 * s2: string two
 *
 * Return: return the greater
 */
int _strcmp(char *s1, char *s2)
{	
	while (*s1 == *s2)
	{
		if (*s1 == '\0' && *s2 != '\0')
			return (-15);
		else if (*s1 != '\0' && *s2 == '\0')
			return (15);
		s1++;
		s2++;
	}
	if (*s1 == '\0' && s2 == '\0')
		return (0);
}

