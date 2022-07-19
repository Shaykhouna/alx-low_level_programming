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
	unsigned int loc = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == acept[r])
			{
				loc++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (loc);
}
