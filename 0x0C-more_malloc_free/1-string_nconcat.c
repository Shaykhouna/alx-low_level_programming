#include <stdio.h>
#include <stdlib.h>
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
	unsigned int i,length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length = n;
	for (i = 0, s1[i]; i++)
		length++;
	conc = malloc(sizeof(conc) * (length + 1));
	if (conc == NULL)
		return (NULL);
	length = 0;
	for (i = 0; s2[i]; i++)
		conc[length++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		conc[length++] = s2[i];
	conc[length] = '\0';
	return (conc);
}
