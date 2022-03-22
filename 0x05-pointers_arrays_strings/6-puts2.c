#include "main.h"

/**
 * puts2 - funtion that prints the even index
 * @str: character to be inputed
 */

void puts2(char *str)
{
int len = 0;

while (str[len] != '\0')
{
if (len % 2 == 0)
{
_putchar(str[len]);
}
len++;
}
_putchar('\n');
}
