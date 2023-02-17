#include <stdio.h>

/**
 * main - combination
 *
 * prints all possible combinations of single-digit numbers
 *
 * Return: return 0 when success
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; ++num)
	{
		putchar(num + '0');
		if (num < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
