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
	char letter

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0')
	}
	for (num = 10; num < 16; num++)
	{
		if (num == 10)
		{
			letter = 'A';
		}
		else if (num == 11)
		{
			letter = 'B';
		}
		else if (num == 12)
		{
			letter = 'C';
		}
		else if (num == 13)
		{
			letter = 'D';
		}
		else if (num == 14)
		{
			letter = 'E';
		}
		else if (num == 15)
		{
			letter = 'F';
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
