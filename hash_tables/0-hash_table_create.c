#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: a data structure of type hash_table_t
 *         or NULL on error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_table;

	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_s *));
	if (hash_table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		(hash_table->array)[i] = malloc(sizeof(hash_node_t));
		if ((hash_table->array)[i] == NULL)
			return (NULL);
	}

	return (hash_table);
}
