#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
*listint_len - prints number of the elements of a listint_t list
*@h: head in the list
*
*Return: the number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t ptr;

	ptr = 0;

	if (!h)
		return (0);
	while (h)
	{
		ptr += 1;
		h = h->next;
	}
	return (ptr);
}
