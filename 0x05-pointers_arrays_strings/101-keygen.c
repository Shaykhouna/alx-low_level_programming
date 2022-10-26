#include <stdio.h>
#include <stdlib.h>
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
int crackme(void)
{
	int pass;

	srand(time(NULL));
	pass = rand() % 100;
	return (pass);
}	
