#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*get_nodeint_at_index - deletes the head node of a listint_t linked list
*@head: head in the list
*@index: index of the node starting at 0
*
*Return: the nth node of a listint_t or or if it doesn't exist return NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tempnode;
	unsigned int j;

	tempnode = head;
	for (j = 0; tempnode != NULL && j < index; j++)
	{
		tempnode = tempnode->next;
	}

	return ((j == index) ? tempnode : NULL);
}
