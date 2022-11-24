#include "lists.h"

/**
 * list_len - counts
 * @h: list used
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t num;

	for (num = 0; h; h = h->next)
		num++;
	return (num);
}
