#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of cents used
 * @argc: the number of command line arguments
 * @argv: holds the string values of the things enter on command line
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/*Declare variables to store the cents and number of cents used*/
	int total_cents = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);/*string at index1 changed to accept integer only*/
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		total_cents += 1;/*when a condition is met it adds 1 to signify a cent*/
	}
	printf("%d\n", total_cents);
		return (0);
}
