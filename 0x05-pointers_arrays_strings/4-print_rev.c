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
	char ch;
	char revstr[] = strrev(s);;

	while (revstr[i] != '\0')
	{
		ch = revstr[i];
		_putchar(ch);
		i++;
	}
	_putchar('\n');
}
