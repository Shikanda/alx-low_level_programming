#include "hash_tables.h"

/**
* hash_table_create - hash table creator
* @size: the size of the hash table
* Return: pointer to a hash table or NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;

	if (!size)
		return (NULL);

	htable = calloc(1, sizeof(hash_table_t));
	if (!htable)
		return (NULL);

	htable->size = size;
	htable->array = calloc(size, sizeof(hash_node_t *));
	if (!htable->array)
	{
		free(htable);
		return (NULL);
	}
	return (htable);
}
