#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*free_listint - frees listint_t list
*@head: head in the list
*
*Return: freed listint_t
*/
void free_listint(listint_t *head)
{
	listint_t *retval;


	while (head != NULL)
	{
		retval = head;
		head = head->next;
		free(retval);
	}
}
