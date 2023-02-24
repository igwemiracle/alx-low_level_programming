#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: 0 on success
 */

int main(void)

{

	long a, max_pf;
	long number = 612852475143;
	double square = sqrt(number);

	for (a = 1; a <= square; a++)
	{
	if (number % a == 0)
	{
	max_pf = number / a;
	}
	}
	printf("%ld\n", max_pf);
	return (0);
}
