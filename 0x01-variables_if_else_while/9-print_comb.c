#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the for loop
 * Description: the main function processes the for loop,
 * runs the for loop till it's false
 *
 * Return: 0
 */

int main(void)
{
	int dig;

	for (dig = 0; dig <= 9; dig++)
	{
		putchar(dig + '0');
		if (dig == 9)
		{
			putchar('\n');
			break;
		}
		else
		{
		putchar(',');
		putchar(' ');
		}
	}
	return (0);
}
