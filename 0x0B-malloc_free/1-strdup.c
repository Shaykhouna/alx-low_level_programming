#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	new = malloc(sizeof(*str) * 1024);
	strcpy(new, str);
	if (sizeof(new) < sizeof(str))
		return (NULL);
	return (new);
	free(new);
}
