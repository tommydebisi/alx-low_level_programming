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
	int row, col, res1, res2;

	/*printing the row for first diagonal*/
	for (row = 0; row < size; row++)
	{
		/*printing the column*/
		for (col = 0; col < size; col++)
		{
			/*check if row and column are equal*/
			if (row == column)
			{
				res1 += a[row][col];
			}
			/*for the first line if row and col is 0 stop the loop*/
			if (row == 0 && col == 0)
			{
				break;
			}	
		}
	}
	printf("%d, ", res1);
	/*printing the row for first diagonal*/
	for (row = 0; row < size; row++)
	{
		/*printing the column*/
		for (col = size; col >= 0; col--)
		{
			/*check if row and column are equal*/
			if (row == column)
			{
				res1 += a[row][col];
			}
			/*for the first line if row and col is 0 stop the loop*/
			if (row == size - 1 && col == size - 1)
			{
				break;
			}	
		}
	}
	printf("%d, ", res1);
}
