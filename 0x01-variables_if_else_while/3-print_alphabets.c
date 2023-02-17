#include <stdio.h>
#include <stdlib.h>

/**
  *main - Prints alphabet in Lowercase and Uppercase, followed by a new line
  *Return: 0 on success
  */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(ch);
		CH++;
	}
	putchar('\n');
	return (0);
}
