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
	int loc = 0;

	for (i = 0; s[i] != 32; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				loc++
		}
	}
	return (loc);
}
