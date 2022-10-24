#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: linked list
 * @str: string to be stored
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t node;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (node = 0; str[node]; node++)
		;

	new->len = node;
	new->next = *head;
	*head = new;

	return (*head);
}

