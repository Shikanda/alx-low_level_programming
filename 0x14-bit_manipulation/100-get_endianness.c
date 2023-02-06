#include "main.h"
#include <stdio.h>
/**
*get_endianness - check endianness
*Return: 0 if big endian , 1 if little endian
*/
int get_endianness(void)
{
	unsigned int i;
	char *s;

	i = 1;
	s = (char *) &i;

	if (*s)
		return (1);
	else
		return (0);
}
