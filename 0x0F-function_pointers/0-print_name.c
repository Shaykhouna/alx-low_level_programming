#include <stdlib.h>
#include <stdio.h>
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
	return (f(name));
}
