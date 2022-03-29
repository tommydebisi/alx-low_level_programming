#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the values in the array
 * @a: integer to be inputted
 * @size: integer size of loop
 */

void print_diagsums(int *a, int size)
{
	/*Declare variables for the loop*/
	int row, col, i, res1, res2;

	/*printing the row for first diagonal*/
	for (row = 0; row < size; row++)
	{
		/*printing the column*/
		for (col = 0, i = 0; col < size; col++, i++)
		{
			/*check if row and column are equal*/
			if (row == col)
			{
				res1 += a[row][col];
			}
			/*check if col is size - 1 - value of col, for the inverted diagonal*/
			if (col == size - 1 - i
		}
	}
	printf("%d, ", res1);
	printf("%d\n", res1);
}
