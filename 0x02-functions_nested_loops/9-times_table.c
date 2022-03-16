#include <stdio.h>
#include "main.h"
/**
 * times_table - times_table function prints
 * the times table from one to nine
 */
void times_table(void)
{
	int value, row, col, doub, unit;

	row = 0;

	while (row < 10)
	{
		col = 0;
		while (col < 10)
		{
			value = row * col;
			doub = value / 10;
			unit = value % 10;
			if (value < 10)
			{
				if (col != 0)
					_putchar(' ');
				_putchar(unit + '0');
				if (col == 9)
				{
					break;
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(doub + '0');
				_putchar(unit + '0');
				if (col == 9)
				{
					break;
				}
				_putchar(',');
				_putchar(' ');
			}
			col++;
		}
		_putchar('\n');
		row++;
	}
}
