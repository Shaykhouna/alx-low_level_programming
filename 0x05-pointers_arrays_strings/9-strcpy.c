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
	strcpy(dest, src);
	return (*dest);
}
