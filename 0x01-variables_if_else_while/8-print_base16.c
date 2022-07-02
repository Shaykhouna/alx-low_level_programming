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

	for (num = 0x0; num <= 0xF; ++num)
	{
		putchar(num + 'x');
	}
	putchar('\n');
	return (0);
}
