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
	if (argc != 3)/*the command arguments must be 3*/
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));/*atoi changes string to int*/
	return (0);
}
