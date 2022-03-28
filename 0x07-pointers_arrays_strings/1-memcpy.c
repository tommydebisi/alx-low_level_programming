#include "main.h"
/**
 * _memcpy - function changes the values by n bytes given
 * @dest: character address to be given
 * @src: character to be inputted
 * @n: number of bytes to be changed
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/*Declare variable to be used in for loop*/
	int i;

	/*just changing the values of the n bytes array*/
	for (i = 0; n > 0; i++)
	{
		/*now change the values of dest with src and readuce n bytes*/
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
