#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is spotted or -1 if value
 * is not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, probeInd;

	if (!array)
		return (-1);

	while (low < high)
	{
		probeInd = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));

		if (probeInd >= low && probeInd <= high)
			printf("Value checked array[%ld] = [%d]\n", probeInd, array[probeInd]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", probeInd);
			return (-1);
		}

		if (array[probeInd] == value)
			return (probeInd);

		if (array[probeInd] > value)
			high = --probeInd;
		else
			low = ++probeInd;
	}
	return (-1);
}
