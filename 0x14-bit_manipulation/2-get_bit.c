#include "main.h"
#include <stdio.h>
/**
*get_bit - prints value of a bit at a given index
*@n: decimal number with the bit
*@index: index starting from 0 of the bit i want
*Return: index value or -1 incase of an error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 8 * 4 * n)
		return (-1);

	return ((n >> index) & 1);
}
