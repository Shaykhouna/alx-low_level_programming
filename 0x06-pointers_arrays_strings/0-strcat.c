#include "main.h"
#include <string.h>

/**
 * _strcat - concat
 *
 * This function concatenates two strings
 * @dest: string destination
 * @src: string source
 *
 * Return: return the result
 */
char *_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = &*src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
