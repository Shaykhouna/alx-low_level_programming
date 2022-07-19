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
	int leng;

	while (s[i] != '\0')
	{
		for (j = 0; accept[i] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				leng++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (leng);
		}
		i++;
	}
	return (leng);
}
