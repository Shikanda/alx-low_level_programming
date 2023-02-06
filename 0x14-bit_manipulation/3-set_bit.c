#include "main.h"
#include <stdio.h>
/**
*set_bit - sets value of a bit at a given index
*@n: decimal number with the bit
*@index: index starting from 0 of the bit i want
*Return: 1 if it worked or -1 incase of an error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (8 * sizeof(unsigned long int)))
		return (-1);

	*n |= (1 << index);
	return (1);
}
