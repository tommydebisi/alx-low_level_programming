#include <stdio.h>
#include "main.h"

/**
*print_diagonal - prints \ diagonally to the console
*@n: character to be entered
*/

void print_diagonal(int n)
{
int i;

if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar(' ');
}
_putchar('\\');
}
_putchar('\n');
}
