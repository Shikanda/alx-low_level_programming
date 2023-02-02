#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*reverse_listint - reverse a listint_t linked list
*@head: head in the list
*
*Return: pointer to the first node to the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *firstnode = NULL;
	listint_t *lastnode = NULL;


	while (*head)
	{
		lastnode = (*head)->next;
		(*head)->next = firstnode;
		firstnode = *head;
		*head = lastnode;
	}
	*head = firstnode;

	return (*head);
}
