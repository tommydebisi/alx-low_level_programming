#include <stdio.h>
#include <stdlib.h>

/**
 * main - it prints the first 98 numbers from
 * one and two
 * Return: 0
 */
int main(void)
{
	unsigned long long int term1, term2, n, sum;

	term1 = 1;

	term2 = 2;

	for (n = 0; n < 98; n++)
	{
		if (n != 97)
		{
			printf("%llu, ", term1);
		}
		else
		{
			printf("%llu\n", term1);
		}
		sum = term1 + term2;
		term1 = term2;
		term2 = sum;
	}
	return (0);
}
