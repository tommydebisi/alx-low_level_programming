#include "main.h"

/**
 * puts_half - funtion that prints half the values
 * @str: character to be inputed
 */

void puts_half(char *str)
{
int len = 0, even, odd, j;
while (len >= 0)
{
if (str[len] == '\0')
{
break;
}
len++;
}
/*printf("len is: %d\n", len);*/
if (len % 2 == 1)
{
even = len / 2;
j = even;
}
else
{
odd = (len - 1) / 2;
j = odd;
}

while (str[j] != '\0')
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}
