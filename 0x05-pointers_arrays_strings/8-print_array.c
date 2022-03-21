#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array with size given
 * @a: integer to be inputed
 * @n: other integer to be inputted
 */

void print_array(int *a, int n)
{
int num, sub;

sub = n - 1;
for (num = 0; num < n; num++)
{
printf("%d", *(a + num));
if (num != sub)
{
printf(", ");
}
}
printf("\n");
}
