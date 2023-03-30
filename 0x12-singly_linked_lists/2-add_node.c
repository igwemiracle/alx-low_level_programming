#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of the list
 * @head: head node
 * @str: string to add to the node
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if ((head != NULL) && (str != NULL))
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);

		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = *head;

		*head = new_node;

		return (new_node);
	}
	return (0);

}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
