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
	int i;
	char *str;

	f(name);
	str = &f(name);
	for (i = 0; i < strlen(*str); i++)
		_putchar(*str);²
	return;
}
