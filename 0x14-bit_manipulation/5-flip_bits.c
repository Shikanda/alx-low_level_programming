#include "main.h"
#include <stdio.h>
/**
*flip_bits - returns bits you would need to flip to get a no from another
*@m: number to flip from
*@n: number to flip to
*Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int index;
	unsigned long int binum;

	index = 0;
	binum = n ^ m;

	do {
		index = index + (binum & 1);

		binum >>= 1;
	} while (binum);
	return (index);
}
