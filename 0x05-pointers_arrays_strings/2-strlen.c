#include "main.h"
#include <string.h>

/**
 * _strlen - length
 *
 * This function returns the length of a string
 * @s: used as variable
 *
 * Return: always 0
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; len < '\0'; len++)
		s++;
		return (len);
}
