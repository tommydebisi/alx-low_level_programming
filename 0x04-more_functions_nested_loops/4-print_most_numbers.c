#include <stdio.h>
#include "main.h"

/**
*print_most_numbers - prints the numbers 0 - 9
*skipping 2 and 4
*/

void print_most_numbers(void)
{
int num = 0;

for (num = 0; num <= 9; num++)
{
if (num == 2 || num == 4)
{
continue;
}
_putchar(num + '0');
if (num == 9)
{
_putchar('\n');
}
}
}
