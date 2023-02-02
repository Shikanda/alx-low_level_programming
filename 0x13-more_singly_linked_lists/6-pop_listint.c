#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*pop_listint - deletes the head node of a listint_t linked list
*@head: head in the list
*
*Return: the heads node(n) or if the linked list is empty it returns 0
*/
int pop_listint(listint_t **head)
{
	listint_t *tempnode;
	int j;


	if (*head == NULL)
		return (0);

	tempnode = *head;
	j = tempnode->n;
	*head = tempnode->next;
	free(tempnode);

	return (j);
}
