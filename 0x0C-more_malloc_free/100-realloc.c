#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates space in memory
 * @ptr: pointer to previous allocated space
 * @old_size: size in bytes of space of previous space
 * @new_size: size in bytes of space of new space
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/*keying in all the requirements*/
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)/*if null, just allocate space to the pointer*/
	{
		ptr = (char *)malloc(new_size);
		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);/*getting rid of the old memory initialized with ptr*/
	ptr = (char *)malloc(new_size);/*if all the statements are false, create new*/
	if (ptr == NULL)/*if it doesn't allocate space*/
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
