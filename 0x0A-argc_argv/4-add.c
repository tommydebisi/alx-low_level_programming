#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the addition of two positive integers
 * @argc: the number of command line arguments
 * @argv: holds the string values of the things enter on command line
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/*Declare variables for the loop and addition*/
	int result = 0, row, col;

	if (argc == 1)/*if the command argument is 1*/
	{
		printf("0\n");
		return (0);
	}
	/*looping through the 2d array to get each elements*/
	for (row = 1; row < argc; row++)
	{
		for (col = 0; argv[row][col] != '\0'; col++)
		{
			/*go through 1d array element and check if digit or not*/
			if (!isdigit(argv[row][col]))/*isdigit checks characters if digit or not*/
			{
				printf("Error\n");
				return (1);
			}
		}
		/*when it leaves the loop it means all elements in the 1d array is digit*/
		result += atoi(argv[row]);/*now we add the row without worrrying*/
	}
	printf("%d\n", result);/*prints addition of two arguments*/
	return (0);
}
