#include "main.h"

/**
 * _strspn - measure
 *
 * This function gets the length of a prefix substring
 * @s: segment to measure
 * @accept: source of byte to measure
 *
 * Return: number of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (c);
}
