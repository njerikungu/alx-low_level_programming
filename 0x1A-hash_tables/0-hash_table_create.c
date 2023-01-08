#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tables;
	hash_node_t **array;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	tables = malloc(sizeof(hash_table_t));
	if (!tables)
		return (NULL);
	array = malloc(sizeof(*array) * size);
	if (!array)
	{
		free(tables);
		return (NULL);
	}
	while (i < size)
	{
		array[i] = NULL;
		i++;
	}

	tables->size = size;
	tables->array = array;

	return (tables);
}
