#include "main.h"
/**
*_memset - fills out the memory with a constant byte of the memory area.
*@s: a pointer for memory
*@b: constant byte
*@n: number of bytes to be filled
*
*Return: pointer to memory s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int addup;

	for (addup = 0; addup < n; addup++)
		s[addup] = b;

	return (s);
}
