#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * delete_nodeint_at_index - deletes node at index of linked list
  * @head: head of linked list
  * @index: index to be deleted from
  * Return: new elements or NULL if fail
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp_node = *head;
	listint_t *after_node;

	if (*head)
	{
		if (index == 0)
		{
			tmp_node = (*head)->next;
			free(*head);
			*head = tmp_node;
			return (1);
		}

		while (i < index - 1)
		{
			tmp_node = tmp_node->next;
			++i;
			if (!tmp_node)
				return (-1);
		}
	after_node = tmp_node->next->next;
	free(tmp_node->next);
	tmp_node->next = after_node;
	return (1);
	}

	return (-1);
}
