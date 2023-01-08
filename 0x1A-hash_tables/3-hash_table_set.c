#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: A pointer to hash table.
 * @key: non empty key
 * @value: The value associated with key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
	{
		free(value_copy);
		return (0);
	}
	tmp->key = strdup(key);
	if (tmp->key == NULL)
	{
		free(tmp);
		return (0);
	}
	tmp->value = value_copy;
	tmp->next = ht->array[index];
	ht->array[index] = tmp;

	return (1);
}
