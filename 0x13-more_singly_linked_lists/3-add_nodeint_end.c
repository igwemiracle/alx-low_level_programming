#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * add_nodeint_end - adds node at the end of linked list
  * @head: head of linked list
  * @n: data
  * Return: new element or NULL if fail
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node = malloc(sizeof(listint_t));
	listint_t *prev_last = (*head);

	end_node->n = n;
	end_node->next = NULL;
	if (*head == NULL)
	{
		(*head) = end_node;
		return (end_node);
	}

	while (prev_last->next != NULL)
	{
		prev_last = prev_last->next;
	}
	prev_last->next = end_node;
	return (end_node);
}
