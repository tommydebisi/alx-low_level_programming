#include <stdlib.h>
#include "main.h"
/**
 * array_range - prints the range of two integers with the integers included
 * @min: integer to be passed
 * @max: integer to be passed
 * Return: ptr
 */

int *array_range(int min, int max)
{
	/*declare poiniter and variables to be used*/
	int i, *ptr;
	/*keying in requirements*/
	if (min > max)
		return (NULL);
	/*creating memory spaces*/
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	/*added 1 to (max-min) so that max can have space to be in*/
	if (ptr == NULL)
		return (NULL);
	/*now go through the loop and initialize the values*/
	for (i = 0; min < max; i++)
	{
		/*increases the value of min till condition above it met*/
		*(ptr + i) = min;
		min++;
	}
	*(ptr + i) = max;/*max is added to the last memory spot*/
	return (ptr);
}
