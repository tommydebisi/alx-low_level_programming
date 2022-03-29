#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints sums of the two diagonals
 * @a: a pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i, res1 = 0, res2 = 0;

	for (i = 0; i < size; i++)
	{
		res1 += *(a + (size * i + i));
		res2 += *(a + (size * i + size - 1 - i));
	}
	printf("%d, ", res1);
	printf("%d\n", res2);
}
