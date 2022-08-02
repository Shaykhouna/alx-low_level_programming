#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#define __BASE_FILE__

/**
 * main - name printer
 *
 * This program prints the name of the file it was compiled from
 *
 * Return: 0 when done
 */
int main()
{
	int i, len;
	char str, c;

	str = __BASE_FILE__;
	len = strlen(str);
	for (i = 0; i < len; i++)
		c = str[i];
		_putchar(c);
	return (0);
}
