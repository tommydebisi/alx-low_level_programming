#include "main.h"
/**
 * _pow_recursion - gives the power of an integer
 * @x: integer inputted
 * @y: power given
 * Return: 1 if n is 0 or -1 is n is negative or pow of n if > 0
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)/*if y is more than 0*/
	{
		if (y == 1)/*if y is 1 return back the value of x*/
			return (x);
		else
			return (x * _pow_recursion(x, (y - 1)));/*x times x depending on y*/
	}
	else if (y == 0)
		return (1);
	else/*if y is negative return -1*/
		return (-1);
}
