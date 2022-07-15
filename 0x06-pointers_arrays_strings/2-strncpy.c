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
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		*dest = src[i];
		i++;
	}
	*dest = '\0';
	return (dest);
}
