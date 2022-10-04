#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is spotted or -1 if value
 * is not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (bSearchVal(array, 0, size - 1, value));
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

	printArray(array, start, end);
	mid = (start + end) / 2;

	if (array[mid] == value)
		return (mid);

	/* check L of mid and R of mid if greater or less than value */
	if (array[mid - 1] > value)
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
