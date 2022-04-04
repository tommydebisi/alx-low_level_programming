#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocates specific number of grid
 * width and height
 * @width: size of width
 * @height: size of height
 * Return: ptr
 */

int **alloc_grid(int width, int height)
{
	/*Declare pointer and variables that'll be used in the loop*/
	int i, j, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	/*typecast the return-type for height*/
	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	/*creating spaces for row*/
	for (i = 0; i < height; i++)
	{
		/*create space for column*/
		ptr[i] = (int *)malloc(width * sizeof(int));
		/*ptr[i] is the value of **ptr */
		if (ptr[i] == NULL)
		{
			/*if the memory wasn't created*/
			free(ptr);
			/*to free the memory in each row i.e the columns*/
			for (j = 0; j <= i; j++)/*to free space for each column w.r.t i*/
				free(ptr[j]);
			return (NULL);
		}
	}
	/*now we have the memory, time to assign 0*/
	/*treating this with 2d array concept*/
	for (i = 0; i < height; i++)
	{
		/*for the columns*/
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
