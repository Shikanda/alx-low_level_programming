#include "main.h"
#include <stdio.h>
/**
*_strpbrk - search a string fofr any of a set of bytes
*@s: string
*@accept: a string which ha s the set of bytes
*
*Return: byte in s
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
