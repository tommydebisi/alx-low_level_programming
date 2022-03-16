#include <stdio.h>
#include <stdlib.h>

/**
 * main - it prints the sum of even terms
 * less than 4 million
 * Return: 0
 */
int main(void)
{
	long int term1, term2, n, sum, result;

	term1 = 1;

	term2 = 2;

	result = 0;

	for (n = 0; n < 34; n++)
	{
		if (term1 % 2  == 0)
		{
			result += term1;
		}
		sum = term1 + term2;
		term1 = term2;
		term2 = sum;
	}
	printf("%lu\n", result);
	return (0);
}
