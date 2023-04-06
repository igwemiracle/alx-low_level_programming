#include "lists.h"
#include <stdlib.h>

/**
  * reverse_listint - reverses a listint_t list
  * @head: head of listint_int list
  * Return: head of the list to be reversed or NULL if faill
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *cur = NULL;

	if (*head)
	{
		while (*head)
		{
			cur = (*head);
			(*head) = (*head)->next;
			cur->next = prev;
			prev = cur;
		}
		*head = prev;
		return (*head);
	}

	return (NULL);
}
