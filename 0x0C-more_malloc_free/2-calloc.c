#include <stdlib.h>
#include "main.h"

/**
 * _calloc - returns addres to memory spaces initialized with 0
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*declare variables to be used*/
	unsigned int i;

	char *ptr;
	/*setting requirements*/
	if (nmemb == 0 || size == 0)
		return (NULL);
	/*get the memory spaces*/
	ptr = (char *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	/*initialize all memory spaces with 0*/
	for (i = 0; i < (nmemb * size); i++)
		*(ptr + i) = 0;
	return (ptr);
}
