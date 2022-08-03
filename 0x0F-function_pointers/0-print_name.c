#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "function_pointers.h"

/**
 * print_name - Printer
 *
 * This function that prints a name
 * @name: var to print
 * @f: function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	char str;
	int i, len;

	len = strlen(name);
	for (i = 0; i < len; i++)
	{
		str[i] = f++;
		_putchar(str[i]);
	}
	return;
}
