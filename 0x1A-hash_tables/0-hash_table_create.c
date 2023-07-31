#include "hash_tables.h"

/*
 * hash_table_create - create a hash table
 * @size - size of the array
 *
 * Return: Pointer to the newly create hash table
 * or NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = NULL;

	if (size == 0)
	{
		return (NULL);
	}

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}

	table->array = malloc(sizeof(void *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->size = size;

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
