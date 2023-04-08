#include "hash_tables.h"

/**
* hash_table_get - gets value in the key
* @ht: the hash table in question
* @key: key in question
* Return: element value or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *element;
	unsigned long int i;

	if (!(ht && key && *key))
	{
		return (0);
	}

	i = key_index((const unsigned char *)key, ht->size);
	element = ht->array[i];
	while (element)
	{
		if (strcmp(element->key, key) == 0)
			return (element->value);
		element = element->next;
	}
	return (NULL);
}
