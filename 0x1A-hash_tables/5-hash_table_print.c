#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *future;
	unsigned long int i;
	char *seperator = "";

	printf("{");
	if (ht)	/* hash_table is not empty */
	{
		for (i = 0; i < ht->size; i++)
		{
			future = ht->array[i];
			while (future)
			{
				printf("%s\'%s\': \'%s\'", seperator, future->key, future->value);
				future = future->next;
				seperator = ", ";
			}
		}
	}
	printf("}\n");
}
