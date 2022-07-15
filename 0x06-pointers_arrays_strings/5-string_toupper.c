#include "main.h"
#include <ctype.h>

/**
 * string_toupper - change string
 *
 * This function changes all lowercase to uppercase
 * @str: string to change
 *
 * Return: return the changed string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = ('a' - 'A');
		i++;
	}
	return (str);
}
