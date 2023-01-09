#include "main.h"
/**
*_strspn - get the length of a prefix substring
*@s: initial segment
*@accept:
*
*Return: bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{

	int i;
	int j;
	int bytes;
	int k;

	bytes = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	k = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				bytes++;
				k = 1;
			}
		}
		if (k == 0)
			return (bytes);
	}
	return (bytes);
}
