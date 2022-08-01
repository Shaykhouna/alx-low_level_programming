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
int main(void)
{
	_putchar(__BASE_FILE__);
	return (0);
}
