#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size - size of the array
 * Return:  a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tables;
	unsigned long int i;

	tables = malloc(sizeof(hash_table_t));
	if (tables == NULL)
		return (NULL);

	tables->size = size;
	tables->array = malloc(sizeof(hash_node_t *) * size);
	if (tables->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		tables->array[i] = NULL;

	return (tables);
}
