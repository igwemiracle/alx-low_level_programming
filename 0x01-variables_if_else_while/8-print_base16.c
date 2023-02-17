#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	char letr;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (letr = 'a'; letr <= 'f'; letr++)
		putchar(letr);

	putchar('\n');

	return (0);
}
