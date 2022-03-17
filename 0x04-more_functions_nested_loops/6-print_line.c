#include <stdio.h>
#include "main.h"

/**
*print_line - prints _ to the console
*@n: character to be entered
*/

void print_line(int n)
{
int num = 0;

for (num = 0; num <= 11; num++)
{
if (num <= 0)
{
_putchar('\n');
break;
}
else if (num > 0)
{
_putchar('_');
if (num == 10)
{
_putchar('\n');
}
}
}
}
