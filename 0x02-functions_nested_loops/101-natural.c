#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function entry point
 *
 * Return: 0
 */
int main(void)
{
	int sum5 = 0, num;
	int sum3 = 0;

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
	int result = sum3 + sum5;

	printf("%d\n", result);
	return (0);
}
