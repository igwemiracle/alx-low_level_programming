#include "lists.h"
#include <stdlib.h>

/**
  * insert_nodeint_at_index - inserts a new node at a given position in listint_t list
  * @head: head of listint_t list
  * @idx: index to where the new node should be added
  * @n: data
  * Return: address of new_node or NULL if fail
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev;
	unsigned int count = 1;

	if (head)
	{
		new_node = malloc(sizeof(listint_t));

		new_node->n = n;
		if (new_node == NULL)
			return (NULL);

		if (idx > 0)
		{
			prev = *head;
			while (prev)
			{
				if (count == idx)
				{
					new_node->next = prev->next;
					prev->next = new_node;
					return (new_node);
				}
				prev = prev->next;
				count++;
			}
			if (idx > count)
				return (NULL);
		}

		else
		{
			new_node->next = *head;
			*head = new_node;
		}
		return (new_node);

	}

	return (NULL);






}
