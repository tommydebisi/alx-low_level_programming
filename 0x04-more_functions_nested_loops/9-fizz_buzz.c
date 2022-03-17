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

	char f[4], b[4], fb[8];

	f = "Fizz";
	b = "Buzz";
	fb = "FizzBuzz";

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
		{
			printf("%s ", f);
		}
		else if (num % 5 == 0)
		{
			if (num == 100)
			{
				printf("%s\n", b);
				break;
			}
			printf("%s ", b);
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("%s ", fb);
		}
		printf("%d ", num);
	}
}
