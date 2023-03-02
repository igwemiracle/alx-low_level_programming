#include "main.h"

/**
 * reverse_array - Reverses the contents of an array int
 * @a: Array
 * @n: Where n is the number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)

{

	int j;
	int temp;

	for (j = 0; j < n; j++)
	{
		n--;
		temp = a[j];
		a[j] = a[n];
		a[n] = temp;
	}
}
