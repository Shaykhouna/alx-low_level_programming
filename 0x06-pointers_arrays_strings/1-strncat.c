#include "main.h"
#include <string.h>

/**
 * _strncat - concatenater
 *
 * This function concatenates two strings
 * @dest: string of destination
 * @src: string source
 * @n: number of char
 * Return: Always pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (*dest)
		dest++;
	for (i = 0; i < n; i++)
	{
		while (*src)
		{
			*dest = src[i];
			src++;
			dest++;
		}
	}
	*dest = '\0';
	return (dest);
}
