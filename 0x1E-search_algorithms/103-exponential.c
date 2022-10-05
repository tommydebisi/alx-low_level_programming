#include "search_algos.h"

/**
 * exponential_search -  searches for a value in a sorted array of
 * integers using the Exponential search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search
 * Return: first index where value is spotted or -1 if value
 * is not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t index = 1, end;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	while ((index < size) && (array[index] <= value))
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		index *= 2;
	}

	end = index;

	if (end > size - 1)
		end = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", (index / 2), end);

	return (bSearchVal(array, (index / 2), end, value));
}

/**
 * bSearchVal - searches for the value in the sorted array
 *
 * @array: pointer to the first element of the array to search in
 * @start: first value index in array
 * @end: last value index in the array
 * @value: value to search for
 * Return: first index where value is spotted or -1 if value
 * is not found
 */
int bSearchVal(int *array, size_t start, size_t end, int value)
{
	int left = 0, right = 0;
	size_t mid;

	if (start > end)
		return (-1);

	/* if the size of array is an odd number */
	if (end == 1)
		end += 1;

	printArray(array, start, end);
	mid = (start + end) / 2;

	if (array[mid] == value)
		return (mid);

	/* checks if first index is the only value in the array */
	if ((start + end) == 0)
		return (-1);

	if (array[mid] > value)
		left = bSearchVal(array, start, mid - 1, value);
	else
		right = bSearchVal(array, mid + 1, end, value);

	if (left == -1 || right == -1)
		return (-1);

	if (left)
		return (left);
	return (right);
}

/**
 * printArray - prints the array specified
 *
 * @array: array to be printed
 * @start: first index of the array
 * @end: last index of the array
 */
void printArray(int *array, size_t start, size_t end)
{
	size_t i;
	char *seperator = "";

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%s%d", seperator, array[i]);
		seperator = ", ";
	}
	printf("\n");
}
