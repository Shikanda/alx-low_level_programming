#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*add_nodeint_end - adds a new node at the end of a list_t list
*@head: head in the list
*@n: integer value to be copied to the new node
*
*Return: address of the new element or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *lastnode;

	if (!(head))
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);


	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	lastnode = *head;

	while (lastnode->next != NULL)
		lastnode = lastnode->next;

	lastnode->next = newnode;

	return (newnode);
}
