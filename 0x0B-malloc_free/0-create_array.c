#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
*create_array - creates an array of characters
*@size: array size
*@c: characters
*Return: NULL if size is 0 or pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
