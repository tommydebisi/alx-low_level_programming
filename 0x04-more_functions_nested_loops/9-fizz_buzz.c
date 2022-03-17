#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints fizz for multiples of 3 and buzz
 * for multiples of 5
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			if (num == 100)
			{
				printf("Buzz\n");
				break;
			}
			printf("Buzz ");
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		printf("%d ", num);
	}
	return (0);
}
