#include "lists.h"

/**
 * print_list - printer
 * @h: list to print
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			_putchar("[0] (nil)\n");
			h = h->next;
			node++;
			continue;
		}
		_putchar([h->len] + 0);
		_putchar(h->str);
		_putchar("\n");
		h = h->next;
		node++;
	}
	return (node);
}
