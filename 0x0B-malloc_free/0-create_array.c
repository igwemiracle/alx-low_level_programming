#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Creates an array of chars and
 * initializes it to a specific char.
 * @size: size input
 * @c: specified char to be used
 * Return: 0 on success
 */

char *create_array(unsigned int size, char c)

{

	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));
	if ((size == 0) || (arr == NULL))
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
