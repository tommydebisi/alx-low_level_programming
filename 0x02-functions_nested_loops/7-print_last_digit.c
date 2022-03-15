#include <stdio.h>
#include "main.h"

/**
 *  print_last_digit - prints the last digit
 *  of an integer
 * @i: gives the integer input
 *
 * Return: @i for the result of the function
 */
int print_last_digit(int i)
{
	i %= 10;
	_putchar(i + '0');
	return (i);
}
