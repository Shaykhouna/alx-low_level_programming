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
	if (s1 != s2)
	{
		while (s1 < s2)
			return (-15);
		while (s1 > s2)
			return (15);
	}
	else
		return(0);
}
