#include <stdio.h>

/**
 * main - Hexadecimal
 *
 * prints all the numbers of base 16 in lowercase
 *
 * Return: Return 0 when successfull
 */
int main(void)
{
	int num = 0x0;

	for (num = 0x0; num <= 0x10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
