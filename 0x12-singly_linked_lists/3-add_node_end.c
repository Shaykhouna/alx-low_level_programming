#include "lists.h"

/**
 * add_node_end - note adding at the end
 * @head: position of new element to take
 * @str: elemnt to duplicate and add
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicata;
	int length;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	duplicata = strup(str);
	if (str == NULL)
	{
		ree(new);
		return(NULL);
	}
	for (length = 0; str[length]; )
		length++;
	new->str = duplicata;
	new->length = length;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
