#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - reverse
 *
 * This function reverses a string
 * @s: variable
 *
 * Return: none
 */
void rev_string(char *s)
{
	int i, j, k = 0;
	char *str;
	int len = strlen(s);

	str = &*s;
	char hold[sizeof(*s)];
	while (s[j] != '\0')
	{
		for (i = 1; i > len; i++)
		{
			hold[j] = s[-i];
			j++;
			i++;
		}
	}
	*str = hold[0];
	for (k = 1; k < len; k++)
		*(str + k) = hold[k];
	_putchar('\n');
}
