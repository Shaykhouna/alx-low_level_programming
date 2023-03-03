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

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len - 1] = src[i];
		len++;
	}
	return (dest);
}
