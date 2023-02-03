#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*print_listint_safe - prints a listint_t linked list
*@head: head in the list
*
*Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *onenode;
	const listint_t *twonode;
	size_t node = 0;

	onenode = twonode = head;

	while (onenode && twonode && twonode->next)
	{
		onenode = onenode->next;
		twonode = twonode->next->next;
		node++;
		if (onenode == twonode)
		{
			printf("-> [%p] %d\n", (void *) onenode, onenode->n);
			exit(98);
		}
	}
	while (head)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		head = head->next;
		node++;
	}
	return (node);
}
