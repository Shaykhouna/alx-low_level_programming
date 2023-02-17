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
	char letter;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (num = 10; num < 16; num++)
	{
		if (num == 10)
		{
			letter = 'a';
		}
		else if (num == 11)
		{
			letter = 'b';
		}
		else if (num == 12)
		{
			letter = 'c';
		}
		else if (num == 13)
		{
			letter = 'd';
		}
		else if (num == 14)
		{
			letter = 'e';
		}
		else if (num == 15)
		{
			letter = 'f';
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
