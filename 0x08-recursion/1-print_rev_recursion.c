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
	int i = 1;

	if (s[i] >= s[0])
	{
		_putchar(s[-i]);
		i--;
		_puts_rev_recursion(s);
	}
	else if (s[i] == s[0])
		_putchar(s[0]);
	else
		_putchar('\n');
}
