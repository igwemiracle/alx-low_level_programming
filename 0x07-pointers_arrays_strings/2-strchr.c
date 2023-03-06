#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: String to be scanned
 * @c: char to search for
 * Return: pointer to the first instance of c
 */

char *_strchr(char *s, char c)

{

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + 1);
	}
	return (NULL);
}
