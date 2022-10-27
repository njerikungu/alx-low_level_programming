#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head node
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
