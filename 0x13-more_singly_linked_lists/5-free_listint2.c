#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*free_listint2 - frees listint_t list
*@head: head in the list
*
*Return: freed listint_t and returns head (nil)
*/
void free_listint2(listint_t **head)
{
	listint_t *retval;
	listint_t *othernode;

	if (!head)
		return;

	retval = *head;

	while (retval)
	{
		othernode  = retval;
		retval = retval->next;
		free(othernode);
	}
	*head = NULL;
}
