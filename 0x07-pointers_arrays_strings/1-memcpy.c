#include "main.h"
#include <string.h>

/**
 * _memcpy - Copier
 *
 * This function copies memory area
 * @dest: destination memory
 * @src: source memory
 * @n: repetition
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
