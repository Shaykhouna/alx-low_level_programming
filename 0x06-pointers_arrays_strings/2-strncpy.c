#include "main.h"

/**
 * _strncpy - Copier
 *
 * This function copies a string
 * @dest: destination string
 * @src: source string
 * @n: repetition number
 *
 * Return: return dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while (*src != '\0')
	{
		for (i = 0; i < n; i++)
			*dest = src[i];
	}
	*dest = '\0';
	return(0);
}
