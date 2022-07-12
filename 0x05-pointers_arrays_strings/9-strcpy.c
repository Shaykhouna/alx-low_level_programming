#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcpy - copier
 *
 * This function copies the string pointed to by src
 * @dest: variable
 * @src: variable
 *
 * Return:
 */
char *_strcpy(char *dest, char *src)
{
	char str = *src;
	char rts = *dest;

	strcpy(dest, str);
	return (rts);
}
