#include "lists.h"

/**
 * dlistint_len -  returns the number of elements
 * in a linked list
 * @h: pointer to head of lists
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (nodes);
}
