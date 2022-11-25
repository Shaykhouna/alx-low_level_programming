
#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - Print a sentence befor the main function
 *
 * Return: nothing
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
