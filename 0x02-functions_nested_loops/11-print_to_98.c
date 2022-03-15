#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - print_to_98 function prints
 * natural numbers to ninety-eight
 * @n: character we'll be inputting
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			printf("%d, ", n);
			n++;
		}
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			printf("%d, ", n);
			n--;
		}
	}
}
