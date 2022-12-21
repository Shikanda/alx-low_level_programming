#include "main.h"
/**
*_strncpy - copies a strings
*@dest: 1st string
*@src: 2nd string
*@n: number of bytes to be added
*Return: what to be copied from dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (src[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = j; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
