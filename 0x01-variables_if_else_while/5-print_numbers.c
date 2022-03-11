#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the for loop
 * Description: the main function processes the for loop,
 * runs the for loop till it's false
 *
 * Return: 0
 */

int main(void)
{
	int alp;

	for (alp = 0; alp <= 9; alp++)
	{
		printf("%d", alp);
	}
	printf("\n");
	return (0);
}
