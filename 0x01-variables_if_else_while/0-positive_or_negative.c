#include <stdlib.h>
#include <time.h>

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
		printf("%lli is postive\n", n);
	}
	else if (n == 0)
	{
		printf("%lli is zero\n", n);
	}
	else
	{
		printf("%lli is negative\n", n);
	} /* your code goes there */
	return (0);
}
