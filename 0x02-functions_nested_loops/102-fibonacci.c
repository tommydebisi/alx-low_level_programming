#include <stdio.h>
#include <stdlib.h>

/**
 * main - it prints the first 50 numbers from
 * one and two
 * Return: 0
 */
int main(void)
{
	long int term1, term2, n, sum;

	term1 = 1;

	term2 = 2;

	for (n = 0; n < 51; n++)
	{
		sum = term1 + term2;
		if (n != 50)
		{
			printf("%lu, ", sum);
		}
		else
		{
			printf("%lu,\n", sum);
		}
		term1 = term2;
		term2 = sum;
	}
}
