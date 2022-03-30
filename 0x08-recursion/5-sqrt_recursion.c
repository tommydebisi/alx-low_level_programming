#include "main.h"
/**
 * get_root - prints the square root of integer
 * @k: integer given
 * @i: integer we're guessing
 * Return: -1 and i
 */
int get_root(int k, int i)
{
	if ((i * i) > k)/*when the product of the guess is more than k*/
		return (-1);/*return -1 because it has no square root*/
	else if ((i * i) == k)/*Means i is the square root of k*/
		return (i);
	return (get_root(k, (i + 1)));/*increase i till base condition is satisfied*/
}

/**
 * _sqrt_recursion - prints the root of n
 * @n: integer to look for the root
 * Return: 1, -1 or the root
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n < 1)
		return (-1);
	else
		return (get_root(n, 2));
}
