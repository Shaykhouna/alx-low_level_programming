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
	int i, length;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	length = strlen(str);
	new = *head;
	duplicata = malloc((length + 1) * sizeof(char));
	if (duplicata == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		duplicata[i] = str[i];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(duplicata);
		return (NULL);
	}
	new->str = duplicata;
	new->length = length;
	new->next = *head;
	*head = new;
	return (new);
}
