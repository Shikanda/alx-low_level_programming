#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*sum_listint- returns the sum of all data of a listint_t linked list
*@head: head in the list
*
*Return: sum of linkint_t or if empty 0
*/
int sum_listint(listint_t *head)
{
	listint_t *tempnode;
	int add;

	add = 0;

	tempnode = head;
	while (tempnode != NULL)
	{
		add = add + tempnode->n;
		tempnode = tempnode->next;
	}

	return (add);
}
