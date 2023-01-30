#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*add_node_end - adds a new node at the end of a list_t list
*@head: head in the list
*@str: string to be copied to the new node
*
*Return: address of the new element or NULL if it fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *newnode;
	list_t *lastnode;

	if (!(head) && !(str))
		return (NULL);

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);

	i = 0;
	while (str[i])
		i++;

	newnode->len = i;
	newnode->next = NULL;

	if (!*head)
	{
		*head = newnode;
		return (newnode);
	}

	lastnode = *head;

	while (lastnode->next)
		lastnode = lastnode->next;

	lastnode->next = newnode;

	return (newnode);
}
