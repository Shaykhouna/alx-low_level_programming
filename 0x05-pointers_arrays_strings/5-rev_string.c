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
	int j = 0;
	char ch = *s;
	int len = strlen(s);
	char *str;

	for (i = len - 1; i >= 0; i--)
	{
		ch = s[i];
		str = ch;
		j++;
	}
	s = str;
	_putchar('\n');
}
