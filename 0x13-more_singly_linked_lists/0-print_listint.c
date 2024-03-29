#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
*print_listint - prints all the elements of a listint_t list
*@h: head in th list
*
*Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t ptr;

	ptr = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);

		ptr += 1;
		h = h->next;
	}
	return (ptr);
}
