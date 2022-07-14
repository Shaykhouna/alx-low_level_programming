#include "main.h"
#include <string.h>

/**
 * _strncat - concatenater
 *
 * This function concatenates two strings
 * @dest: variable one
 * @src: variable two
 * @n: number of repetition
 *
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (*dest)
		dest++;
	while (*src)
	{
		for (i = 0; i < n; i++)
		{
			*dest = src[i];
			dest++;
			src++;
		}
	}
	return (dest);
}
