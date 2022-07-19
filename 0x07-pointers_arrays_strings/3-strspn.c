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
	int i = 0;
	int j = 0;
	unsigned int loc = 0;

	while (s[i])
	{
		i = 0;
		while (accept[j])
		{
			if (accept[i] == s[i]
				loc++;
			j++;
		}
		if (s[i] == ' ')
			break;
		i++;
	}
	return (loc);
}
