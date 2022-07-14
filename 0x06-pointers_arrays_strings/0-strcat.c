#include "main.h"
#include <string.h>

/**
 * _strcat - concat
 *
 * This function concatenates two strings
 * @dest: variable one
 * @src: variable two
 *
 * Return: return the result
 */
char *_strcat(char *dest, char *src)
{
	int lenf = strlen(src);
	int i = 0;

	for (i = 0; i <= lenf; i++)
	{
		strcat(dest, src[i]);
	}
	return (*dest);
}
