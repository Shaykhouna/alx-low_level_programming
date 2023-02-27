#include "main.h"
#include <string.h>

/**
 * _puts - printer
 *
 * This function prints a string
 * @str: used as variable
 *
 * Return: none return value
 */
void _puts(char *str)
{
	char ch = *str;
	int i = 0;

	while (str[i] != '\0')
	{
		ch = str[i];
		_putchar(ch);
		i++;
	}
	_putchar('\n');
}
