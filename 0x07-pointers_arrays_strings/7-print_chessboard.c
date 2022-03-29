#include "main.h"
/**
 * print_chessboard - prints the values in the array
 * @a: character to be inputted
 */

void print_chessboard(char (*a)[8])
{
	/*Declare variables for the loop*/
	int row, col;

	/*printing the row*/
	for (row = 0; row < 8; row++)
	{
		/*printing the column*/
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
