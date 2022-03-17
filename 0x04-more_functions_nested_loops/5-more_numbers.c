#include <stdio.h>
#include "main.h"

/**
*more_numbers - prints the numbers 0 - 9
*skipping 2 and 4
*/

void more_numbers(void)
{
int num = 0, i;

for (num = 0; num <= 11; num++)
{
for (i = 0; i < 15; i++)
{
_putchar((i / 10)+ '0');
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
