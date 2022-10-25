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
	char ch = s;
	char *str;
	int len = strlen(s);

	holder = s;
	str = &*s;
	for (i = len; i > 0; i--)
	{
		ch[j] = s[-1];
		j++;
	}
	*str = ch;
	_putchar('\n');
}
