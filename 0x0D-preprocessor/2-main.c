#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - name printer
 *
 * This program prints the name of the file it was compiled from
 *
 * Return: 0 when done
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
