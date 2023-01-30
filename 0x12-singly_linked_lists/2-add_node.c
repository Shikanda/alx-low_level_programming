#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*add_node - adds a new node at the beginning of a list_t list
*@head: head in the list
*@str: string to be copied to the new node
*
*Return: address of the new element or NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *newnode;

	if (!(head) && !(str))
		return (NULL);

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	i = 0;
	while (str[i])
		i++;

	newnode->str = strdup(str);

	if (!(newnode->str))
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = i;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
