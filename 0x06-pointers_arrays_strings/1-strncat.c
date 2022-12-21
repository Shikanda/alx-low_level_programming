#include "main.h"
/**
*-strncat - concatenate 2 strings
*@dest: 1st string
*@src: 2nd string
*@n: number of bytes to be added
*Return: pointer to the string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;


	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < 0; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
			j = n;
	}

	return (dest);
}
