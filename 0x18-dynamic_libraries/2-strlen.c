#include "main.h"

/**
*_strlen - gets length of string
*@s: string
*
*Return: length
*/

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s++)
	{
		length++;
	}
	return (length);
}
