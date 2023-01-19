#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
*array_iterator - prints a name
*@name: name array
*@size: size of the array
*@: character array
*Return : Always 0
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL &&  array[size] == 0)
		return;

	for (i = 0; i < size; i++)
		action(array[size]);
}
