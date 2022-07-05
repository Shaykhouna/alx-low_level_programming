#include <stdio.h>

/**
 * main - Putchar
 *
 * This program prints _putchar followed by a new line
 *
 * Return: should return 0
 */
int obj = "_putchar";

void _putchar(char obj)
{
	char* str = obj;

	putchar(str);
	return (1);
}
