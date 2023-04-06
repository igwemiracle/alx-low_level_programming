#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_listint_loop_pl - finds a loop in a linked list
 *
 * @head: linked list to search
 *
 * Return: address of node where loop starts/returns, NULL if no loop
 */
listint_t *find_listint_loop_pl(listint_t *head)
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
 * print_listint_safe - prints a linked list, even if it
 * has a loop
 *
 * @head: head of list to print
 *
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t length = 0;
	int loop;
	listint_t *loop_node;

	loop_node = find_listint_loop_pl((listint_t *) head);

	for (length = 0, loop = 1; (head != loop_node || loop) && head != NULL; length++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == loop_node)
			loop = 0;
		head = head->next;
	}

	if (loop_node != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (length);
}
