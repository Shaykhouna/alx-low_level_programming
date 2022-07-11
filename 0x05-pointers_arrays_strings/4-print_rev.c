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
	int revstr[0];

	for (i = 0; i <= len-1; i++)
	{
		strcat(revstr, s[-i -1]);
	}
	while (revstr[j] != '\0')
	{
		ch = revstr[j];
		_putchar(ch);
		j++;
	}
	_putchar('\n');
}
