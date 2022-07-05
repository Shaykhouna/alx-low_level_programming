#include <stdio.h>
#include "main.h"

/**
 * print_alpahabet_x10 - print alphabet
 *
 * this program print the alphabet x10
 *
 * Return: 0 when success
 */
void print_alphabet_x10(void)
{
	int letter;
	int num;

	for (num = 0; num < 10; num++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
