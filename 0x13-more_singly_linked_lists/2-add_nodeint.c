#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*add_nodeint - adds a new node at the beginning of a list_t list
*@head: head in the list then a pointer to the begining of the list
*@n: integer to be copied to the new node
*
*Return: address of the new element or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (!(head))
		return (NULL);


	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);


	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
