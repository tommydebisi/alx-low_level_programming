#include <stdio.h>
#include "main.h"

/**
 * _isdigit - prints the return value is digit or not
 * @c: number to be checked
 * Return: 1 if it's digit and 0 otherwise
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
