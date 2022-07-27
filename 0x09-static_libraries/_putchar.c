#include <unistd.h>

/**
 * _putchar - write char
 *
 * The function write
 * @c: character to print
 *
 * Return: char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
