#include "hash_tables.h"

hash_node_t *make_node(const char *key, const char *value);
/**
* hash_table_set - new element adding
* @ht: table
* @key: key
* @value: value to add
* Return: 1 or 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *head;
	unsigned long int i;
	char *val;

	if (!(ht && key && *key && value))
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	head = ht->array[i];
	new = NULL;

	while (head)
	{
		if (!strcmp(key, head->key))
		{
			val = strdup(value);
			if (!val)
				return (0);
			free(head->value);
			head->value = val;
			return (1);
		}
		head = head->next;
	}
	new = make_node(key, value);
	if (!new)
		return (0);
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
/**
* make_node - element adding to hash table
* @key: add location
* @value: value to add
* Return: 1 or  0
*/
hash_node_t *make_node(const char *key, const char *value)
{
	hash_node_t *newelement;

	newelement = calloc(1, sizeof(hash_node_t));
	if (!newelement)
		return (0);
	newelement->key = strdup(key);
	if (!newelement->key)
	{
		free(newelement);
		return (0);
	}
	newelement->value = strdup(value);
	if (!newelement->value)
	{
		free(newelement->key);
		free(newelement);
		return (0);
	}
	return (newelement);
}
