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
	char temp;

	if (*s)
	{
		temp = s[-i];
		_putchar(temp);
		_print_rev_recursion(s++);
	}
	else
		_putchar('\n');
}
