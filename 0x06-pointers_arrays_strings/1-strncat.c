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
	int len = strlen(*dest);

	while (*dest)
	{
		if (dest == '\0')
		{
			for (i = 0; i < n; i++)
			{
				dest[len + i] = src[i];
			}
		}
		dest++;
	}
	*dest = *dest + '\0';
	return (dest);
}
