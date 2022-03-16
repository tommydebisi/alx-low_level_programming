#include <stdio.h>
#include "main.h"
/**
 * print_times_table - print_times_table function prints tables
 * @n: the multiplication table wanted
 */
void print_times_table(int n)
{
	int value, row, col, doub, unit;

	if (n > 0 && n < 16)
		while (row <= n)

		{
			col = 0;
			while (col <= n)
				value = row * col;
				doub = value / 10;
				unit = value % 10;
				if (value < 10)
					if (col != 0)
						_putchar(' ');
					_putchar(unit + '0');
					if (col == n)
						break;
					_putchar(',');
					_putchar(' ');
				else
					_putchar(doub + '0');
					_putchar(unit + '0');
					if (col == n)
						break;
					_putchar(',');
					_putchar(' ');
				col++;
			_putchar('\n');
			row++;
		}
}
