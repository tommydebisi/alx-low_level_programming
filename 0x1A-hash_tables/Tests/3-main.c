#include "hash_tables.h"

void print_element(hash_node_t *head)
{
	hash_node_t *current;

	if (head == NULL)
	{
		printf("NULL\n");
		return;
	}

	current = head;
	while (current)
	{
		printf("[%s]: %s\n", current->key, current->value);
		current = current->next;
	}
}

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
		unsigned long int index;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
		hash_table_set(ht, "hetairas", "hey");
		hash_table_set(ht, "mentioner", "hello");
		hash_table_set(ht, "betty", "cooloo");

		index = key_index((const unsigned char *)"betty", ht->size);
		print_element(ht->array[index]);

		printf("-------------------\n");

		index = key_index((const unsigned char *)"hetairas", ht->size);
		print_element(ht->array[index]);

    return (EXIT_SUCCESS);
}
