#include "main.h"

/**
 * _memset - filler
 *
 * This function fills memory with a constant byte
 * @s: pointer variable
 * @b: constant byte
 * @n: number of repetition
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
