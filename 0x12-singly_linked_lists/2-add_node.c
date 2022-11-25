#include "lists.h"

/**
 * add_node - note adding
 * @head: position o new element
 * @str: elemnt to duplicate
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicata;
	int length;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	duplicata = strdup(str);
	if (duplicata == NULL)
	{
		free(new);
		return(NULL);
	}
	for (len = 0; str[length];)
		length;
	new->str = duplicata;
	new->length = length;
	new->next = *head;
	*head = new;
	return (new);
}
