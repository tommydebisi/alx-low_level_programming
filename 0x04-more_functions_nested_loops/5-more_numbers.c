#include <stdio.h>
#include "main.h"

/**
*more_numbers - prints the numbers 0 - 9
*skipping 2 and 4
*/

void more_numbers(void)
{
	int num, i;

	for (num = 0; num < 10; num++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
