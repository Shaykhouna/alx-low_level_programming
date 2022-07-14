#include "main.h"
#include <string.h>

/**
 * _strncat - concatenater
 *
 * This function concatenates two strings
 * @dest: variable one
 * @src: variable two
 * @n: number of repetition
 *
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int lens = strlen(src);
	int lent = strlen(dest);
	int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[lent + i] = src[i];
	}
	return (*dest);
}
