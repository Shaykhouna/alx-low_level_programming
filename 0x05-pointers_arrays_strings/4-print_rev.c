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
	int len;
	int i = 0;
	char ch;

	len = strlen(s) * (-1);
	for (i = -1; i <= len; i--)
	{
		ch = s[i];
		_putchar(ch);
	}
	_putchar('\n');	
}
