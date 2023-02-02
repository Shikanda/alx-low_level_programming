#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*insert_nodeint_at_index - inserts a new node at agivwn position
*@head: head in the list
*@idx: index position to be add
*
*Return: address of the new node at index if not possible return NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *place;
	unsigned int i;

	if (!head)
		return (NULL);

	place = *head;

	place = malloc(sizeof(listint_t));

	if (!place)
		return(NULL);

	place->n = n;

	if (idx == 0)
	{
		place->next = newnode;
		*head = place;
		return(*head);
	}

	for(i = 0; i < (idx -1); i++)
	{
		if (newnode)
			newnode = newnode->next;
		else
			return (NULL);
	}

	place->next = newnode->next;
	newnode->next = place;

	return (place);
}
