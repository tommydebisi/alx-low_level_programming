#include "main.h"

/**
 * puts_half - funtion that prints half the values
 * @str: character to be inputed
 */

void puts_half(char *str)
{
int len = 0, last;
while (str[len] != '\0')
{
len++;
}
/*printf("len is: %d\n", len);*/
last = len / 2;
while (str[last] != '\0')
{
_putchar(str[last]);
last++;
}
_putchar('\n');
}
