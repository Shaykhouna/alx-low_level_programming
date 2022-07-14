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
	int i = 0;
	int lent;
	char ch;

	lent = strlen(dest);
	for (i = 0; i  <= lent; i++)
	{
		ch = dest[i];
		if (ch = '\0')
			*dest = *src;
	}
	*dest = '\0';
	return (0);
}
