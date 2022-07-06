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

	for (hour = 00; hour <= 23; hour++)
	{
		for (minu = 00; minu <= 59; minu++)
		{
			_putchar(hour + '0');
			_putchar(':');
			_putchar(minu + '0');
			_putchar('\n');
		}
		minu = 00;
	}
}
