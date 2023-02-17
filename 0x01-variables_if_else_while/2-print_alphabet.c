#include <stdio.h>
#include <stdlib.h>

/**
  *main - Prints alphabet in lowercase, followed by a new line
  *
  *Return: 0 on success
  */
int main(void)
{
	int ch = 'a';

	while (ch <=  'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
