#include "main.h"

/**
 * puts2 - printer
 *
 * This function prints every other character of a string
 * @str: as variable
 *
 * Return: none return
 */
void puts2(char *str)
{
	char ch = *str;
	int i = 0;

	while (str[i] != '\0')
	{
		ch = str[i];
		_putchar(ch);
		i = i + 2;
	}
	_putchar('\n');
}
