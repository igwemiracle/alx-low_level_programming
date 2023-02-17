#include <stdio.h>
#include <string.h>

/**
  * main - prints all single digit numbers of base 10 starting from 0
  * using only the putchar function.
  *
  * Return: 0 on succes
  */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	printf("\n");
	return (0);
}
