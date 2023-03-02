#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Copy to
 * @src: Copy from
 * @n: Limit of the concatenation
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)

{

	int dlen = 0;
	int j = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while ((j < n) && (j < src[j]))
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}
	dest[dlen + n + 1] = '\0';

	return (dest);
}
