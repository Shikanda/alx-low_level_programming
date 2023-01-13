#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
*array_range - creates an array of integers
*@min: smallest values in the array
*@max: largest values in the array
*Return: pointer to the new  array
*/
int *array_range(int min, int max)
{
	int *s;
	int i;
	int j;

	if (min > max)
		return (NULL);

	for (j = 0; j < (max - min); j++)
		;


	s = malloc(sizeof(int) * (j + 1));
	if (s == NULL)

		return (NULL);

	for (i = 0; i <= j; i++)
	{
		min++ = s[i];
	}
	return (s);
}






	return (s);
}
