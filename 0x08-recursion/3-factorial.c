#include "main.h"
/**
 * factorial - multiplies an integer by 1 less than it till it get to 1
 * @n: integer to be added
 * Return: the product or -1 if less than 0
 */
int factorial(int n)
{
	if (n >= 0)/*checks if n is positive*/
	{
		if (n == 0)
			return (1);
		return (n * factorial(n - 1));/*keep on going till n is equal to 0*/
	}
	else /*if n is negative*/
		return (-1);
}
