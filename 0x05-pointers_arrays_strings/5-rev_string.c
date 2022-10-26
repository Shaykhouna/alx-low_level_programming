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
	char hold[sizeof(*s)];
	char *str;
	int len = strlen(s);

	str = &*s;
	while (s[i] != '\0')
	{
		for (i = len; i > 0; i--)
		{
			hold[j] = s[-i];
			j++;
		}
	}
	for (k = 0; k < len; k++)
		*(str + k) = hold[k];
	_putchar('\n');
}
