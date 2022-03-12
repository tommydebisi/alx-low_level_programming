#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints out the conditionals
 *
 * Description: main function goes to the
 * code and executes the loops
 * Return: 0
 */

int main(void)
{
	int dig1;
	int dig2;

	while (dig1 < 10)
	{
		dig1 = 0;
		while (dig2 < 10)
		{
			dig2 = 0;
			if ((dig1 != dig2) && (dig1 < dig2))
			{
				putchar(dig1 + '0');
				putchar(dig2 + '0');
				if ((dig1 == 8) && (dig2 == 9))
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			dig2++;
		}
		dig1++;
	}
	putchar('\n');
	return (0);
}
