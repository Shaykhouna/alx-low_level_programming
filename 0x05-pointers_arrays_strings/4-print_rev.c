#include "main.h"
#include <string.h>

/**
 * print_rev - printer
 *
 * This function prints a string, in reverse
 * @s: used as variable
 *
 * Return: always 0
 */
void print_rev(char *s)
{
	int i;
	char ch = *s;
	int len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		ch = s[i];
		_putchar(ch);
	}
	_putchar('\0');
}
