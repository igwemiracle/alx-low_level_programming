#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - Frees a linked list
  * @head: head of linked list
  * Return: nothing
  */

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	while (head)
	{
		free(head);
		head = head->next;
	}
}
