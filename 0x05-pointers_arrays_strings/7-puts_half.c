#include "main.h"
#include <string.h>

/**
 * puts_half - printer
 *
 * This function half of a string
 * @str: variable
 *
 * Return: none
 */
void puts_half(char *str)
{
	int n = strlen(str);
	int odd = n % 2;
	int len, i;
	char ch;

	if (odd != 0)
	{
		len = (n - 1) / 2;
		for (i = len; i< n; i++)
		{
			ch = str[i];
			_putchar(ch);
		}
	}
	else
	{
		len = n / 2;
		for (i = len; i < n; i++)
		{
			ch = str[i];
			_putchar(ch);
		}
	}
	_putchar('\n');
}
