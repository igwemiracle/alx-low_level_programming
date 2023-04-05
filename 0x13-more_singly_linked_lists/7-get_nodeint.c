#include "lists.h"

/**
  * get_nodeint_at_index - get the node
  * @head: head of linked list
  * @index: index of node
  * Return: nth node of linked list
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
			{
				return (head);
			}
			head = head->next;
			count++;
		}

	}

	return (NULL);
}
