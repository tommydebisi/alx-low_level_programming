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

	putchar(' ');
	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	return (0);
}
