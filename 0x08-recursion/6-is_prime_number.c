#include "main.h"
/**
 * get_prime - tells if the given integer is a prime number or not
 * @k: integer to check
 * @guess: number we're increment to check if k is prime
 * Return: 1 if prime or 0 if not
 */
int get_prime(int k, int guess)
{
	if (k == guess)/*Means k is a prime number*/
		return (1);
	else if (k % guess == 0)/*Means k is not a prime number*/
		return (0);
	return (get_prime(k, (guess + 1)));
	/*increases guess till base condition is met*/
}
/**
 * is_prime_number - tells us if prime number or not
 * @n: integer to check
 * Return: 1 if prime or 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (get_prime(n, 2));/*return the output of the function*/
}
