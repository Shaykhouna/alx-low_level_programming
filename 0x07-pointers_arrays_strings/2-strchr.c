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
	char loc;

	loc = *s;
	for (i = 0; i < len; i++)
	{
		if (c == loc[i])
			return (s[i]);
		else if (loc[i] == '\0')
			return (NULL);
	}
}
