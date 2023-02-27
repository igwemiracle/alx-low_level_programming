#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first integer
 * @b: second integer
 * Return: void
 */

void swap_int(int *a, int *b)

{

	*a = 42;
	*b = 98;

	a = b;
	b = a;
}
