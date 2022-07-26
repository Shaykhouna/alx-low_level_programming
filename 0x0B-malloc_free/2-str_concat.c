#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.b>

/**
 * str_concat - concatenator
 *
 * This function concatenates two strings
 * @s1: firt string
 * @s2: second string
 *
 * Return: nothing 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int size;

	size = strlen(s1) + strlen(s2);
	str = malloc(sizeof(char) * size);
	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	strcat(str, s1);
	strcat(str, s2);
	return (str);
}
