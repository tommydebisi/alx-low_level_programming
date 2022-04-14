#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument
 * @argv: string argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg;
	/*key in requirements*/
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	arg = atoi(argv[1]);
	if (arg < 0)
	{
		printf("Error\n");
		exit(2);
	}
}
