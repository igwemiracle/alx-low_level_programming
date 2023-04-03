#include "lists.h"

/**
  * listint_len - print the len of the linked list
  * @h: head of linked list
  * Return: number of liked list
  */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
