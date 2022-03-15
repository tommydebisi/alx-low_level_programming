#include <stdio.h>
#include "main.h"

/**
 *  print_sign - print_sign function helps tell
 * if a character is an positive, neutral or negative
 * @n: character to know if is postive, nuetral or negative
 *
 * Return: 1 if positive, 0 if equal to zero and -1
 * if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
