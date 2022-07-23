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
	printf("%s\n", argv[argc - 1]);
	_putchar('\n');
	return (0)
}
