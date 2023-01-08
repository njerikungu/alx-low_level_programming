#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value of element or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	node = (ht->array)[index];
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->next;
	if (!node)
		return (NULL);
	else
		return (node->value);
}
