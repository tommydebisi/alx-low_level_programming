#include <stdio.h>
#include "main.h"

/**
*print_diagonal - prints \ diagonally to the console
*@n: character to be entered
*/

void print_diagonal(int n)
{
int i, j, k;

if (n > 0)
{
k = n - 1;
for (i = 0; i < n; i++)
{
for (j = 0; j < n - 1; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
