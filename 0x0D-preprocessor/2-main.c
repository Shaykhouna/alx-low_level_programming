#include <stdio.h>
#include <stdlib.h>
#define __BASE_FILE__

/**
 * main - name printer
 *
 * This program prints the name of the file it was compiled from
 *
 * Return: 0 when done
 */
void main()
{
	char file;

#if __BASE_FILE__ != NULL
	file = __BASE_FILE__
	_putchar(file);
	return (0);
}
