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
	char *new;

	if (*s != '\0')
	{
		temp = s[-i];
		new = &temp;
		i++;
		_putchar(temp);
		_print_rev_recursion(new);
	}
	_putchar('\n');
	else
		return (s);
}
