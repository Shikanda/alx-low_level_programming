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


	if (head)
	{
		retval = head;
		head = head->next;
		free(retval->str);
		free(retval);
	}
}
