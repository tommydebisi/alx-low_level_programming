#include <stdio.h>
#include "main.h"

/**
 *  _abs - _abs prints the absolute value
 *  of an integer
 * @i: gives the result of absolute value
 *
 * Return: @result for the result of the function
 */
int _abs(int i)
{
	if (i < 0)
	{
		i *= -1;
	}
	return (i);
}
