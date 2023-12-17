#include "hash_tables.h"

/**
 * hash_table_set - function to add element to the hash table
 * @ht: hash table you want to add or update the key /value to
 * @key: is the key
 * @value: value associated with the key
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	hash_node_t *curr = NULL;
	unsigned long int i;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	curr = ht->array[i];

	for (; curr != NULL; curr = curr->next)
	{
		if (strcmp(curr->key, key) == 0)
		{
			if (strcmp(curr->value, value) != 0)
			{
				free(curr->value);
				curr->value = strdup(value);
			}
		return (1);
		}
	}

	new = _node_(key, value);
	if (new == NULL)
		return (0);
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}

