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
	/*Declare variables for the loop and multiplication*/
	int result = 0, i;

	for (i = 0; i < argc; i++)
	{
		if ()
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
	}
	if (i == 0)/*if the index is 0 after looping*/
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", result);/*prints addition of two arguments*/
	return (0);
}
