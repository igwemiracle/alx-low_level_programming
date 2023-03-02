#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: two  concat strings
 */

char *_strcat(char *dest, char *src)

{

	int i;
	int j = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';

	return (dest);
}
