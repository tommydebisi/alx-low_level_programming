#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the conditional if statements
 * Description: the main function processes the if loop,
 * if true it runs, if not it goes to else and prints the statement
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
