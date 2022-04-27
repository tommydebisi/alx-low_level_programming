#include "lists.h"
/**
 * detect_loop - detects loop in a list
 * @head: pointer to a singly list
 * Return: number of unique nodes
 */
size_t detect_loop(const listint_t *head)
{
	/*declare variables to be used*/
	const listint_t *fast = head, *slow = head;
	size_t count = 1;
	/*using floyd's cycle finding algorithm*/
	while (slow && fast && fast->next)
	{
		/*goes to the next address*/
		slow = slow->next;
		/*move two addresses front*/
		fast = fast->next->next;
		/*count the node*/
		count++;
		/*check if the two addresses meet*/
		if (slow == fast)
			return (count + 1);
	}
	/*means there's no loop*/
	return (0);
}
/**
 * print_listint_safe - prints a linked list
 * @head: pointer to first node
 * Return: Number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	/*declare variables to be used*/
	size_t nodes, ind = 0;
	const listint_t *ptr;
	/*check if head is NULL*/
	if (head == NULL)
		exit(98);
	/*check for infinite loop*/
	nodes = detect_loop(head);
	if (nodes == 0)
	{
		/*set ptr to h address*/
		ptr = head;
		/*traverse the loop and print out the values*/
		while (ptr != NULL)
		{
			printf("[%p] %d\n", (void *)ptr, ptr->n);
			ind++;
			/*set ptr to the next address*/
			ptr = ptr->next;
		}
	}
	else
	{
		/*set ptr to head*/
		ptr = head;
		while (ind < nodes)
		{/*print the list details according to the nodes*/
			printf("[%p] %d\n", (void *)ptr, ptr->n);
			ptr = ptr->next;
			ind++;
		}
		/*print next node details after reaching the point of loop*/
		printf("-> [%p] %d\n", (void *)ptr, ptr->n);
	}
	return (ind);
}
