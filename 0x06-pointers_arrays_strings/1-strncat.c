#include "main.h"
/**
*_strncat - concatenate 2 strings
*@dest: 1st string
*@src: 2nd string
*@n: number of bytes to be added
*Return: pointer to the string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];

	return (dest);
}
