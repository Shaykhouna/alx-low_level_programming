#include "main.h"

/**
 * _puts_recursion - putcharter
 *
 * This function prints a string, followed by a new line
 * @s: the string to print
 *
 * Return: nothing just print
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
