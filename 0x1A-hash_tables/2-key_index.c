#include "hash_tables.h"

/**
* key_index - gives you the index of a kay
* @key: key
* @size: array size
* Return: index where the value will be stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!size)
	{
		return (0);
	}
	return (hash_djb2(key) % size);
}
