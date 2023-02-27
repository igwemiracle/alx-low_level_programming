#include "main.h"

/**
 * _strlen - prints the length of string
 * @s: string to be checked
 * Return: The lenght
 */

int _strlen(char *s)

{

	int len = 0;

	while (s[len] != '\0')
	len++;
	return (len);
}
