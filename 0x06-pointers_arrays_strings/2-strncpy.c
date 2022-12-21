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

	i = 0;

	for (i = 0; src[i] && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
