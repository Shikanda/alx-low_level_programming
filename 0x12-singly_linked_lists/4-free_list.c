#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*free_list - frees list_t list
*@head: head in the list
*
*Return: freed list_t
*/
void free_list(list_t *head)
{
	list_t *retval;


	while (head)
	{
		retval = head->next;
		free(head->str);
		free(head);
		head = retval;
	}
}
