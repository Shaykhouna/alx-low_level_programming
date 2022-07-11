#include "main.h"
#include <string.h>

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
	int len = strlen(str);

	for (i = 0; i <= len - 1; i+2)
	{
		ch = str[i];
		_putchar(ch);
	}
	_putchar('\n');
}
