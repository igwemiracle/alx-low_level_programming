#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies a string
 * @dest: Copy to
 * @src: Copy from
 * @n: Limit of copying
 * Return: 0 on success
 */

char *_strncpy(char *dest, char *src, int n)

{
	char *start = dest;

	if ((dest == NULL) && (src == NULL))
		return (NULL);

	while (*src && n--)
	{

		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (start);
}
