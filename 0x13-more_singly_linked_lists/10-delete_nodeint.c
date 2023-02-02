#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*delete_nodeint_at_index - deletes a new node at index  position
*@head: head in the list
*@index: index of the node tobe deleted
*
*Return: 1 if it succeeded -1 if it fails
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempnode = NULL;
	listint_t *place;
	unsigned int i;

	if (!(head && *head))
		return (-1);

	place = *head;

	if (index == 0)
	{
		tempnode = place;
		*head = place->next;
		free(tempnode);
		return (1);
	}
	else
	{
		for (i = 0; i < (index - 1); i++)
		{
			if (place->next)
				place = place->next;
			else
				return (-1);
		}

		tempnode = place->next;
		place->next = tempnode->next;
	}
	free(tempnode);

	return (1);
}
