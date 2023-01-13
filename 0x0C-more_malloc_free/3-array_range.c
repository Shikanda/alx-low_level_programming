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
	char *s;
	unsigned int i;
	int j;


	if (min > max)
		return (NULL);

	s = malloc(max * min);
	if (s == NULL)
	{
		return (NULL);
	}
	max = s[0]
	for (i = 0; i < max; i++)
	{
		if (max > s[i])
			max = s[i];
	}
	min = s[0]
	for (i = 0; i < min; i++)
	{
		if (min < s[i])
			min = s[i];
	}
	return (array_range);
}






	return (s);
}
