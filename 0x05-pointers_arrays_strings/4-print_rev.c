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
	int i = 0;
	int j = 0;
	char ch;
	int len = strlen(s);
	char revstr[1];

	revstr[1] = s[-1];
	for (i = 1; i <= len-1; i++)
	{
		strcat(revstr, str[-i -1]);
	}
	while (revstr[j] != '\0')
	{
		ch = revstr[j];
		_putchar(ch);
		j++;
	}
	_putchar('\n');
}
