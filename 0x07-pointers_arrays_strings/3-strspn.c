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
	int i;
	int j;
	int c;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for j = 0; accept[j] != '\0'; j++)
				c++;
		}
		else
			return (c);
	}
	return (c);
}
