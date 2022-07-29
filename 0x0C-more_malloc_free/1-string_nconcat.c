#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenate
 *
 * This function concatenates two strings
 * @s1: first string
 * @s2: second tring
 * @n: size to concatenate
 *
 * Return: 0 when done
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int i,length, size;

	length = strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > length)
		n = length;
	size = strlen(s1) + n + 1;
	conc = malloc(sizeof(conc) * size);
	if (conc == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		conc[strlen(s1) + i] = s2[i];
	conc = strcat(conc, '\0');
	return (conc);
}
