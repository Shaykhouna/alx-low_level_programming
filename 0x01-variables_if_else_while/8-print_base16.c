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
		if (num == 10)
		{
			num = 'A';
		}
		else if (num == 11)
                {
                        num = 'B';
		}
		else if (num == 12)
                {
                        num = 'C';
                }
		else if (num == 13)
                {
                        num = 'D';
                }
		else if (num == 14)
                {
                        num = 'E';
                }
		else if (num == 15)
                {
                        num = 'F';
                }
		putchar(num);
	}
	putchar('\n');
	return (0);
}
