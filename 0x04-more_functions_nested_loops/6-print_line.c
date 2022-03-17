#include <stdio.h>
#include "main.h"

/**
*print_line - prints _ to the console
*@n: character to be entered
*/

void print_line(int n)
{
for (n = 0; n < 11; n++)
{
if (n <= 0)
{
_putchar('\n');
break;
}
else if (n > 0)
{
_putchar('_');
if (n == 10)
{
_putchar('\n');
}
}
}
}
