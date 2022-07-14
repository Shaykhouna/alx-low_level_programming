#include "main.h"
#include <string.h>

/**
 * _strncat - concatenater
 *
 * This function concatenates two strings
 * @dest: string of destination
 * @src: string source
 * @n: number of char
 *
 * Return: Always pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (*dest)
		dest++;
	do {
		for (i = 0; i < n; i++)
		{
			*dest = src[i];
			src++;
			dest++;
		}
	} while (*src);
	*dest = '\0';
	return (dest);
}
