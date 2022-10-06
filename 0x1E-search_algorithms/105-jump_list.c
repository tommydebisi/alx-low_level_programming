#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of
 * integers using the Jump search algorithm.
 *
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 * Return: pointer to the first node where value is located
 * or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump;
	listint_t *future = list, *prev = list;

	if (!list)
		return (NULL);

	jump = (size_t)sqrt((double)size);

	while (future)
	{
		future = l_jumper(future, jump);
		printf("Value checked at index [%ld] = [%d]\n",
				future->index, future->n);

		if (value <= future->n  || future->index + 1 == size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
					prev->index, future->index);

			while (prev && prev->index <= future->index)
			{
				printf("Value checked at index [%ld] = [%d]\n",
						prev->index, prev->n);

				if (prev->n == value)
					return (prev);
				prev = prev->next;
			}
			return (NULL);
		}
		prev = future;
	}
	return (NULL);
}

/**
 * l_jumper - moves the current pointer by the number
 * of jumps specified
 *
 * @current: list to be moved to next addr.
 * @jump: number of jumps
 * Return: pointer to the addr jumped to or NULL
 * if not available
 */
listint_t *l_jumper(listint_t *current, size_t jump)
{
	size_t i = 0;

	while (i < jump && current->next)
	{
		current = current->next;
		i++;
	}
	return (current);
}
