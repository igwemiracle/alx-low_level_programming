#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
  * binary_to_uint - converts binary number to an unsigned int
  * @b: string of binary number
  *
  * Return: unsigned int of converted binary number
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int len = strlen(b);
	int count = 0;

	if (b)
	{
		while (len--)
		{
			if ((b[len] != 48) && (b[len] != 49))
				return (0);
			if (b[len] == 49)
				decimal += 1 << count;
			count++;
		}
		return (decimal);
	}

	return (0);
}
