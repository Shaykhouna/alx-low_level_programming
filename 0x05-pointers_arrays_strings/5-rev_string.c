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
	int i = 0;
	char ch = *s;
	char *str;
	int len = strlen(s);

	str = &*s;
	for (i = len; i > 0; i--)
	{
		strncat(ch, s[-i], len -(len - i));
	}
	*str = ch;
	_putchar('\n');
}
