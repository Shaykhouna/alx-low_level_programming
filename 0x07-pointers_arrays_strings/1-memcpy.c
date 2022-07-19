#include "main.h"

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
	char **tmp;

	tmp = &*dest;
	for (i = 0; src[i] <= n; i++)
		**tmp == src[i];
	return (dest);
}
