#include "main.h"
#include "stdio.h"

/**
**_strcpy - copies string pointed
*@dest: a pointer
*@src: a pointer
*Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
