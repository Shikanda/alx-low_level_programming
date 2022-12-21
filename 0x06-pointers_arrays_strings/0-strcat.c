#include "main.h"
#include <string.h>
/**
*_strcat - concatenate 2 strings
*@dest: 1st string
*@src: 2nd string
*Return: pointer to the string dest
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = strlen(src);

	for (i = 0; src[i]; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';

	return (dest);
}
