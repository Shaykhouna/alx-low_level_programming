#include <stdio.h>
#include <stdlib.h>

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
	new = malloc(sizeof(*str) * 2);
	new = strcpy(str);
	if (sizeof(new) < sizeof(str))
		return (NULL);
	return (new);
}