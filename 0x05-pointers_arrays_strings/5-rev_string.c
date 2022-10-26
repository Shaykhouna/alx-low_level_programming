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
	int i, j = 0;
	char ch = *s;
	char hold[sizeof(*s)] = s;
	char *str;
	int len = strlen(s);

	str = &*s;
	while (s[i] != '\0')
	{
		for (i = len; i > 0; i--)
		{
			ch = hold[-i];
			*(str + j) = ch;
			j++;
		}
	}
	_putchar('\n');
}
