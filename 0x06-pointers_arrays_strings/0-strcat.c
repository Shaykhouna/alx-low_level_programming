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
	int i;
	int len = strlen(src);

	while (*dest && *dest != '\0')
	{
		dest++;
		while (*src)
		{
			for (i = 0; i < len; i++)
			{
				*dest = src[i];
				dest++;
			}
		}
	}
	return (dest);
}
