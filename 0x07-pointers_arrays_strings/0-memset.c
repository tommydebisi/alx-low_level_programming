#include "main.h"
/**
 * _memset - function changes the values by n bytes given
 * @s: character address to be given
 * @b: character to be inputted
 * @n: number of bytes to be changed
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	/*Declare variable to be used in for loop*/
	int i;

	/*just changing the values of the n bytes array*/
	for (i = 0; n > 0; i++)
	{
		/*now change the values of s with char b*/
		s[i] = b;
		n--;
	}
	return (s);
}
