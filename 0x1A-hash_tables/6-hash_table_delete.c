#include "hash_tables.h"

/**
* hash_table_delete - deletes  hash tables
* @ht: hash table in question
* Return: 0/NULL
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *element;
	hash_node_t *freeit;

	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		element = ht->array[i];
		while (element)
		{
			freeit = element;
			element = element->next;
			free(freeit->key);
			free(freeit->value);
			free(freeit);
		}
	}
	free(ht->array);
	free(ht);
}
