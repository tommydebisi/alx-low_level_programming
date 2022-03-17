#include <stdio.h>
#include "main.h"

/**
*print_line - prints _ to the console
*@n: character to be entered
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
