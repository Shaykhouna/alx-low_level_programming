#include <stdio.h>
#include "main.h"

/**
 * main - name
 *
 * This program prints its name, followed by a new line
 * @argc: count
 * @argv: array
 *
 * Return: value int
 */
int main(int argc, char *argv[])
{
	name(argv[0]);
	_putchar('\n');
	return (0)
}

/**
 * name - name
 *
 * This function return the name
 * 
 * Return: nothing.
 */
void name(char s)
{
	_putchar(s);
}
