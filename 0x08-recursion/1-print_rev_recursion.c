#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - Reverse
 *
 * This function prints a string in reverse
 * @s: string to reverse
 *
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	int i;

	i = strlen(s) - 1;
	if (i >= 0)
	{
		_putchar(s[i]);
		i--;
		_puts_recursion(s[i]);
	}
	else
		_putchar('\n');
}
