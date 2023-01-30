#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
*print_list - prints all the elements of a list_t list
*@h: head in th list
*
* if str is NULL print [0] (nil)
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t ptr;

	ptr = 0;

	if (!h)
		return (0);
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		ptr += 1;
		h = h->next;
	}
	return (ptr);
}
