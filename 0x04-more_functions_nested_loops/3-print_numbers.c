#include <stdio.h>
#include "main.h"

/**
*print_numbers - prints the numbers 0 - 9
*/

void print_numbers(void)
{
int num = 0;

for (num = 0; num <= 9; num++)
{
_putchar(num + '0');
if (num == 9)
{
_putchar('\n');
}
}
}
