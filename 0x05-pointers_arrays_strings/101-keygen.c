#include <stdio.h>
#include <stlib.h>
#include <time.h>
#include "main.h"

/**
 * 101-crackme - password
 *
 * This program generates random valid passwords for the program 101-crackme
 * @pass: variable
 *
 * Return: return the password
 */
int 101-crackme(void)
{
	srand(time(NULL));

	pass = rand() % 100;

	return (pass);
}	
