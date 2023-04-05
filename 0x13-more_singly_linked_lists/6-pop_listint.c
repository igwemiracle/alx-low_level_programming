#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the head
 * @head: head
 * Return: 0 on success
 */
int pop_listint(listint_t **head)
{
	int data;

	listint_t *new_head;

	if (*head == NULL)
		return (0);

	data = (*head)->n;

	new_head = *head;
	*head = (*head)->next;

	free(new_head);
	return (data);
}
