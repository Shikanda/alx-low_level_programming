#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
*binary_to_uint - prints a unsigned int from the binary input value
*@b: char pointer to be turned into an unsigned value
*Return: unsigned int value
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int deci;

	deci = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if ((*b != '0') && (*b != '1'))
			return (0);

		deci = (deci << 1) | (*b++ - '0');
	}

	return (deci);
}
