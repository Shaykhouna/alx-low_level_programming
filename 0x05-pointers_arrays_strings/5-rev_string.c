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
	char str;
	int len = strlen(s);

	for (i = 1; i < len; i++)
	{
		str = str + s[-i];
	}
	*s = str;
}
