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
	char look = *src;
	int i = 0;
	int len = _strlen(dest);

	while (look != '\0' && i < n)
	{
		dest[len] = src[i];
		len++;
		i++;
		look = src[i];
	}
	return (dest);
}
