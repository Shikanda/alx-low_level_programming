#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
*list_len - prints number of the elements of a list_t list
*@h: head in th list
*
* if str is NULL print [0] (nil)
*Return: the number of nodes
*/
size_t list_len(const list_t *h)
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
