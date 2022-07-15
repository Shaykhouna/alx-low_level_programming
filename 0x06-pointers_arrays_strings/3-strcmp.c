#include "main.h"

/**
 * _strcmp - comparer
 *
 * This function compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: return the greater
 */
int _strcmp(char *s1, char *s2)
{	
	int i = 0;
	int diff;

	diff = s1[i] - s2[i];
	for (i = 0; s1[i] != '\0' || s2[i] != '\0', i++)
	{
		if (s1[i] != s2[i])
			return (diff);
	}
	return (0);
}

