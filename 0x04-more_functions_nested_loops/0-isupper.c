#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: character to be checked
 * Return: 1 on success or 0 if otherwise
 */

int _isupper(int c)

{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
