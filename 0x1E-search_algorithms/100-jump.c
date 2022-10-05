#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 * of integers using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is spotted or -1 if value
 * is not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, index = 0, end = 0, i;

	if (!array)
		return (-1);

	jump = (size_t)sqrt((double)size);

	while (index < size)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		end += jump;
		if (value <= array[end] || end > size - 1)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", index, end);
			if (end > size - 1)
				end = size - 1;

			for (i = index; i <= end; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);

				if (i == size - 1)
					return (-1);
			}
		}
		index = end;
	}
	return (-1);
}
