#include "hash_tables.h"

/**
 * shash_table_create - creates a hastable
 *
 * @size: Size of the hash table
 * Return: pointer to the newly create hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *htable;
	unsigned long int i;

	/* Malloc space for one hashtable */
	htable = malloc(sizeof(shash_table_t) * 1);
	if (!htable)
		return (NULL);

	/* init size of hashtable */
	htable->size = size;

	/* Malloc space for the array in the table */
	htable->array = malloc(htable->size * sizeof(shash_table_t *));
	if (!htable->array)
		return (NULL);

	/* set all malloced spots in array to NULL */
	for (i = 0; i < htable->size; i++)
		htable->array[i] = NULL;

	/* init head and tail of sorted hash table */
	htable->shead = NULL;
	htable->stail = NULL;

	return (htable);
}

/**
 * shash_table_set - adds element to the hash table
 *
 * @key: the key to be identified
 * @value: value to be added
 * @ht: pointer to the hash table
 *
 * Return: 1 if it succesfully sets the element
 * else 0 if it fails
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *future;

	if (strlen(key) == 0 || !ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);   /* gets index */

	future = ht->array[index];
	while (future)    /* checks for duplicates */
	{
		if (strcmp(key, future->key) == 0)
		{
			free(future->value);
			future->value = strdup(value);
			return (1);
		}
		future = future->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->snext = NULL;
	new_node->sprev = NULL;
	new_node->next = ht->array[index];  /* add to beginning of node */
	ht->array[index] = new_node;

	return (insert_sorted_dnode(&ht, new_node));
}

/**
 * insert_sorted_dnode - inserts sorted nodes in doubly link list
 *
 * @ht: hash table
 * @addr: address of node to be inserted
 * Return: 1 after insertion
 */
int insert_sorted_dnode(shash_table_t **ht, shash_node_t *addr)
{
	shash_node_t *future, *past;

	if (!(*ht)->shead)  /* first node */
	{
		(*ht)->shead = addr;
		(*ht)->stail = addr;
		return (1);
	}

	if (strcmp(addr->key, (*ht)->shead->key) < 0)	/* insert at beginning */
	{
		addr->snext = (*ht)->shead;
		(*ht)->shead->sprev = addr;
		(*ht)->shead = addr;
		return (1);
	}

	future = (*ht)->shead, past = NULL;
	while (future)
	{
		if (strcmp(addr->key, future->key) < 0)	/* insert in the middle */
		{
			future->sprev->snext = addr;
			addr->sprev = future->sprev;
			future->sprev = addr;
			addr->snext = future;
			return (1);
		}
		past = future;
		future = future->snext;
	}

	past->snext = addr; /* insert at the end */
	addr->sprev = past;
	(*ht)->stail = addr;

	return (1);
}

/**
 * shash_table_get - gets the value associated with a key
 *
 * @ht: hash table
 * @key: the key to be identified
 *
 * Return: the value at the key or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *future;

	if (!ht)
		return (NULL);

	future = ht->shead;

	while (future)  /* get value at key */
	{
		if (strcmp(key, future->key) == 0)
			return (future->value);

		future = future->snext;
	}

	/* key doesn't exist */
	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 *
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *future;
	char *seperator = "";

	if (!ht)	/* head is empty */
		return;

	printf("{");	/* head is not empty */
	future = ht->shead;
	while (future)
	{
		printf("%s'%s': '%s'", seperator, future->key, future->value);
		future = future->snext;
		seperator = ", ";
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 *
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *future;
	char *seperator = "";

	if (!ht)	/* head is empty */
		return;

	printf("{");	/* head is not empty */
	future = ht->stail;
	while (future)
	{
		printf("%s'%s': '%s'", seperator, future->key, future->value);
		future = future->sprev;
		seperator = ", ";
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 *
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *future;

	if (!ht)	/* head is empty */
		return;

	future = ht->shead;
	while (ht->shead)
	{
		ht->shead = ht->shead->snext;
		free(future->key);
		free(future->value);
		free(future);
		future = ht->shead;
	}
	free(ht->array);
	free(ht);
}
