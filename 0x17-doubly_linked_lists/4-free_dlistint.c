#include "lists.h"

/**
* free_dlistint - free a doubly linked list
* @head: the head of list
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *frere;

	while (head)
	{
		frere = head;
		head = head->next;
		free(frere);
	}
}
