#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning of listint_t list
  * @head: head of listint_t list
  * @n: data
  * Return: Address of new element or NULL if fail
  */

listint_t *add_nodeint(listint_t **head, const int n)
{

	if (head != NULL)
	{
		listint_t *new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = n;
		new_node->next = (*head);
		(*head) = new_node;

		return (new_node);
	}

	return (NULL);
}
