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
	int cap;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	for (cap = 'A'; cap <= 'Z'; cap++)
	{
		putchar(cap);
	}
	putchar('\n');
	return (0);
}
