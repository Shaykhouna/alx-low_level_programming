#include <stdio.h>

/**
 * main - Numbers
 *
 * prints all single digit numbers of base 10 starting from 0
 *
 * Return: return 0 when success
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
