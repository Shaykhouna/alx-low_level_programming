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
	int i;
	int len = strlen(dest);

	while (*dest)
		dest++;
	for (i = len; i < len + n; i++)
	{
		dest[i] = src[i];
	}
	*dest = dest + '\0';
	return (dest);
}
