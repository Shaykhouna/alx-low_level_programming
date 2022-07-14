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

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
