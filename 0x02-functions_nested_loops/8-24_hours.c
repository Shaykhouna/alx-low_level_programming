#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - 24h chrono
 *
 * This function that prints every minute of the day of Jack Bauer
 *
 * Return: as always 0 when success
 */
void jack_bauer(void)
{
	int hour;
	int minu;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minu = 0; minu <= 59; minu++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(minu / 10 + '0');
			_putchar(minu % 10 + '0');
			_putchar('\n');
		}
		minu = 0;
	}
}
