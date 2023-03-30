#include "lists.h"

/**
 * list_len - Prints out the number of elements in list_t h
 * @h: struct
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{

	int num_elems = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		num_elems++;
		h = h->next;
	}
	return (num_elems);
}
