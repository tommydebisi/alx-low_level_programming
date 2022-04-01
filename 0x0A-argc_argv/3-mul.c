#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of two arguments
 * @argc: the number of command line arguments
 * @argv: holds the string values of the things enter on command line
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/*Declare variables for the loop and multiplication*/
	int i, num1, num2, result;

	for (i = 0; i < argc; i++)
	{
		if (i == 1)/*first argument taken*/
			num1 = atoi(argv[i]);/*atoi changes the string to int*/
		if (i == 2)/*second argument taken*/
			num2 = atoi(argv[i]);

	}
	if (i == 0)/*if the index is 0 after looping*/
	{
		printf("Error\n");
		return (1);
	}
	result = num1 * num2;/*multiplies the two integer arguments*/
	printf("%d\n", result);/*prints mutiplication of two arguments*/
	return (0);
}
