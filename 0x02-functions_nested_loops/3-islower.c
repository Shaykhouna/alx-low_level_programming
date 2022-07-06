#include <stdio.h>
#include "main.h"

/**
 * _islower - lowercase
 *
 * this function checks for lowercase character
 *
 * Return: 1 when true and 0 when none
 */
int _islower(int c)
{
	int obj;
	do 
	{
		obj = 1;;
	}while (c >= 'a' && c <='z');
	for (c = 0; c <= 96; c++)
	{
		obj = 0;
	}
	return (obj);
}
