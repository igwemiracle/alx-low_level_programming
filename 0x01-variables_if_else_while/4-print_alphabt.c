#include <stdio.h>
#include <stdlib.h>

/**
  *main - returns alphabet except q and e
  *
  *Return: 0 on success
  */
int main(void)
{
	int ch = 'a';

	while (ch <=  'z')
	{
		if ((ch != 'q') && (ch != 'e'))
			{
				putchar(ch);
			}
			ch++;
	}
	putchar('\n');
	return (0);
}
