#include "hash_tables.h"

/**
* hash_table_print - function that prints a  hash table
* @ht: hash table
* Return: nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned int flag = 0;
	hash_node_t *element;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		element = ht->array[i];
		while (element)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", element->key, element->value);
			flag = 1;
			element = element->next;
		}
	}
	printf("}\n");
}
