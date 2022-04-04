#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees the memory of grid
 * @grid: pointer to grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	/*delclare variable to be used in for loop*/
	int i;
	/*free the space created by the pointer for height*/
	free(grid);
	for (i = 0; i < height; i++)
	{
		/*free space created for width*/
		free(grid[i]);
	}
}
