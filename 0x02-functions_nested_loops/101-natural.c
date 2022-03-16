#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the sum of multiples 3 and 5
 *
 * Return: 0
 */
int main(void)
{
	int sum5 = 0, num;
	int sum3 = 0, result;

	for (num = 0; num < 1024; num++)
	{
		if (num % 5 == 0)
		{
			sum5 += num;
		}
		else if (num % 3 == 0)
		{
			sum3 += num;
		}
	}
	result = sum3 + sum5;

	printf("%d\n", result);
	return (0);
}
