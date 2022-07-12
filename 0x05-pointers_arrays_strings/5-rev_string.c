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
	int i;
	char ch = *s;
	int len = strlen(s);

	for (i = -len; i < 0; i++)
	{
		ch = s[i];
		_putchar(ch);
	}
	_putchar('\n');
}
