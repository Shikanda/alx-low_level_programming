#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
*int_index - searches for an integer
*@array: name array
*@size: number of elements
*@cmp: pointer to function that is used to compare values
*Return: Always 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (cmp == 0)
		return (-1);
	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		while (cmp(array[index]) != 0)
			return (index);
	}
	return (index);
}
