#include "main.h"
#include <string.h>

/**
 * _strchr - Locator
 *
 * This function  locates a character in a string
 * @s: string variable
 * @c: character to locate
 *
 * Return: pointer to first occurence
 */
char *_strchr(char *s, char c)
{
	int i;
	int len = strlen(s);

	while (*s)
	{
		if (c != *s)
			s++;
		else
			return (s);
	}
	return (NULL);

}
