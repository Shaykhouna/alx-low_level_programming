#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/**
 * _strdup - pointer giver
 *
 * This function return a pointer to a newly allocated space
 * @str: original string
 *
 * Return: nothing
 */
char *_strdup(char *str)
{
	char *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(&str) * CHAR_MAX);
	strcpy(new, str);
	if ((sizeof(new) < sizeof(str)) || (new == NULL))
		return (NULL);
	return (new);
	free(new);
}
