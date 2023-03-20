#include "main.h"
/**
*_memcpy - copies area memory
*@dest: memory area with original
*@src: memory area to get copy
*@n: number of bytes
*
*Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int  hold;

	for (hold = 0; hold < n; hold++)
		dest[hold] = src[hold];

	return (dest);
}

