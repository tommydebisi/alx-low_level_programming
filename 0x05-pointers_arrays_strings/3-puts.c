#include "main.h"

/**
 * _puts - funtion that prints a string
 * @str: character to be inputed
 */

void _puts(char *str)
{
int len = 0;

while (str[len] != '\0')
{
_putchar(str[len]);
len++;
}
_putchar('\n');
}
