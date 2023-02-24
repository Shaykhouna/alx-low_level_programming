#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - date converter
 *
 * This program converts a date to the day of year
 * and determines how many days are left
 * @month: the month
 * @day: the days
 * @year: years to check
 *
 * Return: 0 when done
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
	{
		if (month >= 2 && day >= 60)
		{
			day++;
		}
		printf("day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date");
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
