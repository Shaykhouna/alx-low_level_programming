#include "main.h"
#include <ctype.h>

/**
 * string_toupper - change string
 *
 * This function changes all lowercase to uppercase
 * @: string to change
 *
 * Return: return the changed string
 */
char *string_toupper(char *str)
{
	while (*str)
	{
		*str = (*str >= 'a' && *str <= 'z') ? *str-32 : *str;
		str++;
	}
	return (str);
}
