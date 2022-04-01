#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: the number of command line arguments
 * @argv: holds the string values of the things enter on command line
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/*Declare variable to be used in loop*/
	int i = 0;

	while (i < argc)/*keep the loop running till i exceedes argc*/
	{
		i++;
		argv++;
	}
	i--;
	printf("%d\n", i);
	return (0);
}
