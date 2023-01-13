#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
*_calloc - allocate memory using malloc
*@nmemb: number of elements in the array
*@size: size of the bytes of the array
*Return: NULL if it fails or pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
		s[i] = 0;

	return (s);
}
