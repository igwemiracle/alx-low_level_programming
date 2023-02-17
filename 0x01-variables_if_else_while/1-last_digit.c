#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - Prints the output if the Last digit is greater than 5,
  *less than 6 or Is 0.
  *Return: 0 on success
  */
int main(void)
{
	int n;
	int l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is", n);
	l_digit = n % 10;
	if (l_digit > 5)
	{
		printf("%d and is greater than 5\n", l_digit);
	}
	else if ((l_digit < 6) && (l_digit < 0))
	{
		printf("%d and is less than 6 and not 0\n", l_digit);
	}
	else
	{
		printf("%d and is 0\n", l_digit);
	}
	return (0);
}
