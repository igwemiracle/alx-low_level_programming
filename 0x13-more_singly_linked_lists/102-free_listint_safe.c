#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop_fl - finds a loop in a linked list
 *
 * @head: linked list to search
 *
 * Return: address of node where loop starts/returns, NULL if no loop
 */
listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *pointer, *end_node;

	if (head == NULL)
		return (NULL);

	for (end_node = head->next; end_node != NULL; end_node = end_node->next)
	{
		if (end_node == end_node->next)
			return (end_node);
		for (pointer = head; pointer != end_node; pointer = pointer->next)
			if (pointer == end_node->next)
				return (end_node->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - frees a listint list, even if it has a loop
 *
 * @h: head of list
 *
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loop_node;
	size_t len;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loop_node = find_listint_loop_fl(*h);
	for (len = 0; (*h != loop_node || loop) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == loop_node && loop)
		{
			if (loop_node == loop_node->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}

